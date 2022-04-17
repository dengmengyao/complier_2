%code top{
    #include <iostream>
    #include <assert.h>
    #include "parser.h"
    extern Ast ast;
    int yylex();
    int yyerror( char const * );
}

%code requires {
    #include "Ast.h"
    #include "SymbolTable.h"
    #include "Type.h"
}

%union {
    int itype;
    char* strtype;
    StmtNode* stmttype;
    ExprNode* exprtype;
    Type* type;
    Id* idtype;
    Explist* exprline;
}

%start Program
%token <strtype> ID 
%token <itype> INTEGER
%token FOR WHILE  BREAK CONTINUE
%token PUTINT PUTCH GETCH GETINT
%token IF ELSE NOD
%token INT VOID CONST
%token LPAREN RPAREN LBRACE RBRACE SEMICOLON LB RB
%token MUL DIV COMOP
%token ADD SUB OR AND NOT LESS MORE RELGEQ RELLEQ EQUOP UEQUOP  ASSIGN
%token RETURN
%nterm <stmttype> Stmts Stmt AssignStmt  BlockStmt IfStmt ExpStmt ReturnStmt DeclStmt DeclStmts  FuncDef ConstStmt WhileStmt BreakStmt ContinueStmt putintStmt putchStmt semicolonStmt
%nterm <exprtype> Exp AddExp Cond LnotExp LOrExp PrimaryExp LVal RelExp LAndExp MulExp 
%nterm <type> Type constType
%nterm <idtype> IDlist PARAMLIST PARAMLISTs 
%nterm <exprline>  Explist
%precedence THEN
%precedence ELSE
%%
Program
    : Stmts {
        ast.setRoot($1);
    }  
    ;
Stmts
    :  
    Stmt {$$=$1;}
    | Stmts Stmt{
        $$ = new SeqNode($1, $2);
    }
    ;
Stmt
    : AssignStmt {$$=$1;}
    | BlockStmt {$$=$1;}
    | IfStmt {$$=$1;}
    | WhileStmt {$$=$1;}
    | BreakStmt {$$=$1;}
    | ContinueStmt {$$=$1;}
    | ExpStmt {$$=$1;}
    | ReturnStmt {$$=$1;}
    | DeclStmt {$$=$1;}
    | DeclStmts {$$=$1;}
    | ConstStmt {$$=$1;}
    | FuncDef {$$=$1;}
    | putintStmt {$$=$1;}
    | putchStmt {$$=$1;}
    | semicolonStmt {$$=$1;}
    ;
IDlist
    :
    ID{
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, $1, identifiers->getLevel());
        identifiers->install($1, se);
        $$ = new Id(se);
        delete []$1;
    }
    |
    IDlist NOD ID {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, $3, identifiers->getLevel());
        identifiers->install($3, se);
        $$ = new Id($1, se);
        delete []$3;
    }
    ;

LVal
    : ID {
        SymbolEntry *se;
        se = identifiers->lookup($1);
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)$1);
            delete [](char*)$1;
            assert(se != nullptr);
        }
        $$ = new Id(se);
        delete []$1;
    }
    ;

AssignStmt
    :
    LVal ASSIGN GETINT LPAREN RPAREN SEMICOLON {
        $$ = new AssignintStmt($1);
    }
    |
    LVal ASSIGN GETCH LPAREN RPAREN SEMICOLON {
        $$ = new AssignchStmt($1);
    }
    |
    LVal ASSIGN Exp SEMICOLON {
        $$ = new AssignStmt($1, $3);
    }
    ;


BlockStmt
    :   
    LBRACE 
        {identifiers = new SymbolTable(identifiers);} 
        Stmts RBRACE 
        {
            $$ = new CompoundStmt($3);
            SymbolTable *top = identifiers;
            identifiers = identifiers->getPrev();
            delete top;
        }
    |
    LBRACE RBRACE {
        $$ = new CompoundStmt;
    }
    ;
IfStmt
    : IF LPAREN Cond RPAREN Stmt %prec THEN {
        $$ = new IfStmt($3, $5);
    }
    | IF LPAREN Cond RPAREN Stmt ELSE Stmt {
        $$ = new IfElseStmt($3, $5, $7);
    }
    ;
WhileStmt
    :
    WHILE LPAREN Cond RPAREN Stmt {
        $$ = new WhileStmt($3, $5);
    }
    ;
BreakStmt
    :
    BREAK SEMICOLON {
        $$ = new BreakStmt;
    }
    ;
ContinueStmt
    :
    CONTINUE SEMICOLON {
        $$ = new ContinueStmt;
    }
    ;
ReturnStmt
    :
    RETURN Exp SEMICOLON {
        $$ = new ReturnStmt($2);
    }
    ;
ExpStmt
    :
    Cond SEMICOLON {
        $$ = new ExpStmt($1);  
    }
    ;
Exp
    :
    AddExp {$$ = $1;}
    ;
Cond
    :
    LOrExp {$$ = $1;}
    ;

PrimaryExp
    :
    LVal {
        $$ = $1;
    }
    | INTEGER {
        SymbolEntry *se = new ConstantSymbolEntry(TypeSystem::intType, $1);
        $$ = new Constant(se);
    }
    |
    LPAREN LOrExp RPAREN {$$ = $2;}
    |
    ID LPAREN Explist RPAREN {
        SymbolEntry *se;
        se = identifiers->lookup($1);
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)$1);
            delete [](char*)$1;
            assert(se != nullptr);
        }
        $$=new Id(se,$3);
        delete []$1;
    }
    ;

Explist
    :
    LOrExp {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new Explist(se,$1);
    }
    |Explist NOD LOrExp {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new Explist(se,$1,$3);
    }
    |%empty {$$ = NULL;}
    ;

LnotExp
    :
    PrimaryExp {$$ = $1;}

    |
    ADD LnotExp 
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr0(se, BinaryExpr0::ADD, $2);
    }
    |
    SUB LnotExp 
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr0(se, BinaryExpr0::SUB, $2);
    }
    |
    NOT LnotExp 
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr0(se, BinaryExpr0::NOT, $2);
    }
    ;
MulExp
    :
    LnotExp {$$ = $1;}
    |
    MulExp MUL LnotExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::MUL, $1, $3);
    }
    |
    MulExp DIV LnotExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::DIV, $1, $3);
    }
    |
    MulExp COMOP LnotExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::COMOP, $1, $3);
    }
    ;
AddExp
    :
    MulExp {$$ = $1;}
    |
    AddExp ADD MulExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::ADD, $1, $3);
    }
    |
    AddExp SUB MulExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::SUB, $1, $3);
    }
    ;
RelExp
    :
    AddExp {$$ = $1;}
    |
    RelExp LESS AddExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::LESS, $1, $3);
    }
    |
    RelExp MORE AddExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::MORE, $1, $3);
    }
    |
    RelExp RELGEQ AddExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::RELGEQ, $1, $3);
    }
    |
    RelExp RELLEQ AddExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::RELLEQ, $1, $3);
    }
    |
    RelExp EQUOP AddExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::EQUOP, $1, $3);
    }
    |
    RelExp UEQUOP AddExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::UEQUOP, $1, $3);
    }
    ;
LAndExp
    :
    RelExp {$$ = $1;}
    |
    LAndExp AND RelExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::AND, $1, $3);
    }
    ;
LOrExp
    :
    LAndExp {$$ = $1;}
    |
    LOrExp OR LAndExp
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        $$ = new BinaryExpr(se, BinaryExpr::OR, $1, $3);
    }
    ;
Type
    : INT {
        $$ = TypeSystem::intType;
    }
    | VOID {
        $$ = TypeSystem::voidType;
    }
    ;
constType
    :
    CONST {
        $$ = TypeSystem::constType;
    }
    ;
PARAMLISTs
    :
    ID ASSIGN Exp{
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, $1, identifiers->getLevel());
        identifiers->install($1, se);
        $$ = new Id(se,$3);
        delete []$1;
    }
    |PARAMLISTs NOD ID ASSIGN Exp {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, $3, identifiers->getLevel());
        identifiers->install($3, se);
        $$ = new Id($1,se,$5);
        delete []$3;
    }
    ;
ConstStmt
    :
    constType INT PARAMLISTs SEMICOLON {
       $$=new ConstStmt($3);
    }
    ;
DeclStmt
    :
    Type IDlist SEMICOLON {$$ = new DeclStmt($2);}
    ; 
DeclStmts   
    :
    Type PARAMLISTs SEMICOLON {
        $$ = new DeclStmt($2);
    }
    ;
putintStmt
    :
    PUTINT LPAREN PrimaryExp RPAREN SEMICOLON
    {
        $$ = new putintStmt($3);
    }
    ;
putchStmt
    :
    PUTCH LPAREN PrimaryExp RPAREN SEMICOLON
    {
        $$ = new putchStmt($3);
    }
    ;
FuncDef
    :
    Type ID  {
        Type *funcType;
        funcType = new FunctionType($1,{});
        SymbolEntry *se = new IdentifierSymbolEntry(funcType, $2, identifiers->getLevel());
        identifiers->install($2, se);
        identifiers = new SymbolTable(identifiers);
    } 
    LPAREN PARAMLIST RPAREN
    BlockStmt
    {
        SymbolEntry *se;
        se = identifiers->lookup($2);
        assert(se != nullptr);
        $$ = new FunctionDef(se, $5, $7);
        SymbolTable *top = identifiers;
        identifiers = identifiers->getPrev();
        delete top;
        delete []$2;
    }
    ;
PARAMLIST
    :
    INT ID{
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, $2, identifiers->getLevel());
        identifiers->install($2, se);
        $$ = new Id(se);
        delete []$2;
    }
    |PARAMLIST NOD INT ID{
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, $4, identifiers->getLevel());
        identifiers->install($4, se);
        $$ = new Id($1, se);
        delete []$4;
    }
    |VOID {$$ = NULL;}
    |%empty {$$ = NULL;}
    ;
semicolonStmt
    :
    SEMICOLON {
        $$=new semicolonStmt;
    }
    ;
%%

int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}
