#include "Ast.h"
#include "SymbolTable.h"
#include <string>
#include "Type.h"

extern FILE *yyout;
int Node::counter = 0;

Node::Node()
{
    seq = counter++;
}

void Ast::output()
{
    fprintf(yyout, "program\n");
    if(root != nullptr)
        root->output(4);
}

void BinaryExpr::output(int level)
{
    std::string op_str;
    switch(op)
    {
        case ADD:
            op_str = "add";
            break;
        case SUB:
            op_str = "sub";
            break;
        case MUL:
            op_str = "mul";
            break;
        case DIV:
            op_str = "div";
            break;
        case COMOP:
            op_str = "comop";
            break;
        case AND:
            op_str = "and";
            break;
        case OR:
            op_str = "or";
            break;
        case LESS:
            op_str = "less";
            break;
        case MORE:
            op_str = "more";
            break;
        case RELGEQ:
            op_str = "relgeq";
            break;
        case RELLEQ:
            op_str = "relleq";
            break;
        case EQUOP:
            op_str = "equop";
            break;
        case UEQUOP:
            op_str = "uequop";
            break;

    }
    fprintf(yyout, "%*cBinaryExpr\top: %s\n", level, ' ', op_str.c_str());
    expr1->output(level + 4);
    expr2->output(level + 4);
}

void Explist::output(int level){
     expr1->output(level+4);
     if(exp)
         exp->output(level);
}



/////加
void BinaryExpr0::output(int level)
{
    std::string op_str;
    switch(op)
    {
        case NOT:
            op_str = "not";
            break;
        case ADD:
            op_str = "zheng";
            break;
        case SUB:
            op_str = "fu";
            break;

    }
    fprintf(yyout, "%*cBinaryExpr\top: %s\n", level, ' ', op_str.c_str());
    expr1->output(level + 4);
}
//////

void Constant::output(int level)
{
    std::string type, value;
    type = symbolEntry->getType()->toStr();
    value = symbolEntry->toStr();
    fprintf(yyout, "%*cIntegerLiteral\tvalue: %s\ttype: %s\n", level, ' ',
            value.c_str(), type.c_str());
}

void Id::output(int level)
{
    std::string name, type;
    int scope;
    name = symbolEntry->toStr();
    type = symbolEntry->getType()->toStr();
    scope = dynamic_cast<IdentifierSymbolEntry*>(symbolEntry)->getScope();
    fprintf(yyout, "%*cId\tname: %s\tscope: %d\ttype: %s\n", level, ' ',
            name.c_str(), scope, type.c_str());
    if(before)
        before->output(level);
    if(expr1)
        expr1->output(level);
    
}

void CompoundStmt::output(int level)
{
    fprintf(yyout, "%*cCompoundStmt\n", level, ' ');
    if(stmt)
         stmt->output(level + 4);
}

void SeqNode::output(int level)
{
    fprintf(yyout, "%*cSequence\n", level, ' ');
    stmt1->output(level + 4);
    stmt2->output(level + 4);
}
//////加
void ConstStmt::output(int level)
{
    fprintf(yyout, "%*cConstStmt\n", level, ' ');
    id->output(level + 4);
}

/////



void DeclStmt::output(int level)
{
    fprintf(yyout, "%*cDeclStmt\n", level, ' ');
    id->output(level + 4);
}

////加

void putintStmt::output(int level)
{
    fprintf(yyout, "%*cputintStmt\n", level, ' ');
    expr->output(level + 4);
}

void putchStmt::output(int level)
{
    fprintf(yyout, "%*cputchStmt\n", level, ' ');
    expr->output(level + 4);
}
/////

void IfStmt::output(int level)
{
    fprintf(yyout, "%*cIfStmt\n", level, ' ');
    cond->output(level + 4);
    thenStmt->output(level + 4);
}

void IfElseStmt::output(int level)
{
    fprintf(yyout, "%*cIfElseStmt\n", level, ' ');
    cond->output(level + 4);
    thenStmt->output(level + 4);
    elseStmt->output(level + 4);
}

/////加
void WhileStmt::output(int level)
{
    fprintf(yyout, "%*cWhileStmt\n", level, ' ');
    cond->output(level + 4);
    Stmt->output(level + 4);
}

void BreakStmt::output(int level)
{
    fprintf(yyout, "%*cBreakStmt\n", level, ' ');
}

void ContinueStmt::output(int level)
{
    fprintf(yyout, "%*cContinueStmt\n", level, ' ');
}
/////

void ReturnStmt::output(int level)
{
    fprintf(yyout, "%*cReturnStmt\n", level, ' ');
    retValue->output(level + 4);
}

void ExpStmt::output(int level)
{
    fprintf(yyout, "%*cExpStmt\n", level, ' ');
    Value->output(level + 4);
}
void AssignStmt::output(int level)
{
    fprintf(yyout, "%*cAssignStmt\n", level, ' ');
    lval->output(level + 4);
    expr->output(level + 4);
}

void AssignintStmt::output(int level)
{
    fprintf(yyout, "%*cgetintStmt\n", level, ' ');
    lval->output(level + 4);
}

void AssignchStmt::output(int level)
{
    fprintf(yyout, "%*cgetchStmt\n", level, ' ');
    lval->output(level + 4);

}

void FunctionDef::output(int level)
{
    std::string name, type;
    name = se->toStr();
    type = se->getType()->toStr();
    fprintf(yyout, "%*cFunctionDefine function name: %s, type: %s\n", level, ' ', 
            name.c_str(), type.c_str());
    if(param)
        param->output(level+4);
    stmt->output(level + 4);
}

void semicolonStmt::output(int level)
{
    fprintf(yyout, "%*csemicolonStmt\n", level, ' ');
}

