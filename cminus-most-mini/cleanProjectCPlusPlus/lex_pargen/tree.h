#ifndef __TREE__H__
#define __TREE__H__

#include <iostream>
#include <malloc.h>
using namespace std;

#define  MAX_CHILDREN 4


enum					// 结点类型——kind
{
	STMT_NODE = 0,
	EXPR_NODE,
	DECL_NODE
};

enum					// 语句结点子类型——kindkind
{
	IF_STMT = 0,
	WHILE_STMT,
	INPUT_STMT,
	PRINT_STMT,
	COMP_STMT,
	EXPR_STMT,  //只是一个包装而已
};

enum					// 表达式结点子类型——kindkind
{
	TYPE_EXPR = 0,
	OP_EXPR,
	NOT_EXPR,
	UMINUS_EXPR,
	ARRAY_EXPR,
	CONST_EXPR,
	ID_EXPR,
};

enum					// 声明结点子类型——kindkind
{
	VAR_DECL = 0,
	ARRAY_DECL
};
/*
enum					// 运算——op
{
	//加减乘除，算术运算符
	PLUS = 0,
	MINUS,
	TIMES,   
	OVER,
	//与或，逻辑运算符
	AND,
	OR,
	//比较运算符
	EQ,
	LT,
	GT,
	GE,
	LE,
	NE,
	ASSIGN,
};
*/
enum
{
	Integer = 0,
};

union NodeAttr {
	int op;				// 表达式结点，子类型是运算类型时，用op保存具体运算
	double vali;				// 表达式结点，常量表达式时，用vali保存整型常量值
	char valc;			// 字符值
	int symtbl_seq;     //符号表位置

	NodeAttr(void) { op = 0; }		// 几种构造函数
	NodeAttr(int i)	{ op = i; }
	NodeAttr(double i)	{ vali = i; }
	NodeAttr(char c) { valc = c; }
};


struct Node
{
	struct Node *children[MAX_CHILDREN];	// 孩子结点
	struct Node * sibling;
	int kind;					// 结点类型
	int kind_kind;				// 子类型
	NodeAttr attr;				// 结点属性
	int addr;					// 分配的内存空间（数组下标）
};



class tree	// 语法树类
{
private:
	Node *root;			// 根结点

private:
	void recursive_get_addr(Node *t);	// 为临时变量（如表达式）分配存储空间
	void recursive_execute(Node *t);	// 遍历树，执行源程序

public:
	void setRoot(Node* p){root = p;}
	Node *NewRoot(int kind, int kind_kind, NodeAttr attr, int type,
		Node *child1 = NULL, Node *child2 = NULL, Node *child3 = NULL, Node *child4 = NULL);					// 创建一个结点，设置其属性，连接孩子结点
	void get_addr(void);		// 分配空间和执行代码的接口
	void execute(void);
};

extern tree parser_tree;
Node* createOpExpr(tree& expr, Node* p, Node* q, int type);
Node* createId(tree& expr);
Node* createId(tree& expr, int seq); //创建变量节点，其属性存储其符号表的序号
Node* createConst(tree& expr, double value);
Node* createSTMT(tree& expr, int type, Node* p1, Node* p2=NULL, Node* p3 = NULL, Node* p4=NULL);
Node* createIfStmt(tree& expr,Node* p1, Node* p2, Node* p3 = NULL );
Node* createWhileStmt(tree& expr, Node* p1, Node* p2);
Node* createInputStmt(tree& expr, Node* p);
Node* createOutStmt(tree& expr, Node* p);
Node* createExprStmt(tree& expr, Node* p);
Node* createAssignStmt(tree& expr, Node* variable, int value);
Node* createAssignStmt(tree& expr, Node* variable, Node* q);
Node* createCompStmt(tree& expr, Node* p1, Node* p2=NULL, Node* p3 = NULL, Node* p4=NULL);
void executeTree(tree& expr, Node* root);
void executeTree(tree& expr);

#endif//__TREE__H__