#ifndef __AST_H__
#define __AST_H__

#include <fstream>

class SymbolEntry;

class Node
{
private:
    static int counter;
    int seq;
public:
    Node();
    int getSeq() const {return seq;};
    virtual void output(int level) = 0;
};

class ExprNode : public Node
{
protected:
    SymbolEntry *symbolEntry;
public:
    ExprNode(SymbolEntry *symbolEntry) : symbolEntry(symbolEntry){};
};

class BinaryExpr : public ExprNode
{
private:
    int op;
    ExprNode *expr1, *expr2;
public:
    enum {ADD, SUB, MUL , DIV, COMOP, AND, OR, LESS,MORE,RELGEQ,RELLEQ,EQUOP,UEQUOP};
    BinaryExpr(SymbolEntry *se, int op, ExprNode*expr1, ExprNode*expr2) : ExprNode(se), op(op), expr1(expr1), expr2(expr2){};
    void output(int level);
};

class Explist : public ExprNode
{
private: 
    Explist *exp;
    ExprNode *expr1;
public:
    Explist(SymbolEntry *se,ExprNode *expr1) : ExprNode(se),expr1(expr1){};
    Explist(SymbolEntry *se,Explist *exp,ExprNode *expr1) : ExprNode(se),exp(exp),expr1(expr1){};
    void output(int level);
};
////加

class BinaryExpr0 : public ExprNode//运算
{
private:
    int op;
    ExprNode *expr1;
public:
    enum {NOT,ADD,SUB};
    BinaryExpr0(SymbolEntry *se, int op, ExprNode*expr1) : ExprNode(se), op(op), expr1(expr1){};
    void output(int level);
};
/////
class Constant : public ExprNode
{
public:
    Constant(SymbolEntry *se) : ExprNode(se){};
    void output(int level);
};

class Id : public ExprNode //符号，符号组合，初始化
{
private:
    Id *before;
    ExprNode *expr1;
public:
    Id(SymbolEntry *se) : ExprNode(se){};
    Id(SymbolEntry *se, ExprNode *expr1) : ExprNode(se),expr1(expr1){};
    Id(Id *before, SymbolEntry *se) : ExprNode(se), before(before){};//输出IDLIST
    Id(Id *before,  SymbolEntry *se,ExprNode *expr1) : ExprNode(se),before(before),expr1(expr1){};//输出IDLIST
    void output(int level);
};


class StmtNode : public Node
{};

class CompoundStmt : public StmtNode
{
private:
    StmtNode *stmt;
public:
    CompoundStmt(StmtNode *stmt) : stmt(stmt) {};
    CompoundStmt(){};
    void output(int level);
};

class SeqNode : public StmtNode
{
private:
    StmtNode *stmt1, *stmt2;
public:
    SeqNode(StmtNode *stmt1, StmtNode *stmt2) : stmt1(stmt1), stmt2(stmt2){};
    void output(int level);
};

//////加
class ConstStmt : public StmtNode//常数
{
private:
    Id *id;
public:
    ConstStmt(Id *id) : id(id) {};
    void output(int level);
};
/////

class DeclStmt : public StmtNode
{
private:
    Id *id;
public:
    DeclStmt(Id *id) : id(id){};
    void output(int level);
};

/////加
class putintStmt : public StmtNode//输出数
{
private:
    ExprNode *expr;
public:
    putintStmt(ExprNode *expr) : expr(expr){};
    void output(int level);
};

class putchStmt : public StmtNode//输出ASCII
{
private:
    ExprNode *expr;
public:
    putchStmt(ExprNode *expr) : expr(expr){};
    void output(int level);
};
/////
class IfStmt : public StmtNode
{
private:
    ExprNode *cond;
    StmtNode *thenStmt;
public:
    IfStmt(ExprNode *cond, StmtNode *thenStmt) : cond(cond), thenStmt(thenStmt){};
    void output(int level);
};

class IfElseStmt : public StmtNode
{
private:
    ExprNode *cond;
    StmtNode *thenStmt;
    StmtNode *elseStmt;
public:
    IfElseStmt(ExprNode *cond, StmtNode *thenStmt, StmtNode *elseStmt) : cond(cond), thenStmt(thenStmt), elseStmt(elseStmt) {};
    void output(int level);
};
/////加
class WhileStmt : public StmtNode//while
{
private:
    ExprNode *cond;
    StmtNode *Stmt;
public:
    WhileStmt(ExprNode *cond, StmtNode *Stmt) : cond(cond), Stmt(Stmt){};
    void output(int level);
};

class BreakStmt : public StmtNode
{
public:
    BreakStmt(){};
    void output(int level);
};

class ContinueStmt : public StmtNode
{
public:
    ContinueStmt(){};
    void output(int level);
};
//////

class ReturnStmt : public StmtNode
{
private:
    ExprNode *retValue;
public:
    ReturnStmt(ExprNode*retValue) : retValue(retValue) {};
    void output(int level);
};

class ExpStmt : public StmtNode//表达式
{
private:
    ExprNode *Value;
public:
    ExpStmt(ExprNode*Value) : Value(Value) {};
    void output(int level);
};

class AssignStmt : public StmtNode
{
private:
    ExprNode *lval;
    ExprNode *expr;
public:
    AssignStmt(ExprNode *lval, ExprNode *expr) : lval(lval), expr(expr) {};
    void output(int level);
};

class AssignintStmt : public StmtNode//输入数
{
private:
    ExprNode *lval;
public:
    AssignintStmt(ExprNode *lval) : lval(lval) {};
    void output(int level);
};

class AssignchStmt : public StmtNode//输入数
{
private:
    ExprNode *lval;
public:
    AssignchStmt(ExprNode *lval) : lval(lval) {};
    void output(int level);
};

class FunctionDef : public StmtNode //函数括号内有值
{
private:
    SymbolEntry *se;
    Id *param;
    StmtNode *stmt;
public:
    FunctionDef(SymbolEntry *se, Id *param, StmtNode *stmt) : se(se), param(param), stmt(stmt){};
    void output(int level);
};

class semicolonStmt : public StmtNode
{
public:
    semicolonStmt(){};
    void output(int level);
};




class Ast
{
private:
    Node* root;
public:
    Ast() {root = nullptr;}
    void setRoot(Node*n) {root = n;}
    void output();
};

#endif
