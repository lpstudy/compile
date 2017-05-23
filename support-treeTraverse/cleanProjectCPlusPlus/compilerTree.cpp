#include <iostream>
#include <malloc.h>
using namespace std;

#define  MAX_CHILDREN 4
int my_mem[100];			// “内存”
int offset;

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
	COMP_STMT
};

enum					// 表达式结点子类型——kindkind
{
	TYPE_EXPR = 0,
	OP_EXPR,
	NOT_EXPR,
	ARRAY_EXPR,
	CONST_EXPR,
	ID_EXPR
};

enum					// 声明结点子类型——kindkind
{
	VAR_DECL = 0,
	ARRAY_DECL
};

enum					// 运算——op
{
	PLUS = 0,
	MINUS
};
enum
{
	Integer = 0,
};

union NodeAttr {
	int op;				// 表达式结点，子类型是运算类型时，用op保存具体运算
	int vali;				// 表达式结点，常量表达式时，用vali保存整型常量值
	char valc;			// 字符值

	NodeAttr(void) { op = 0; }		// 几种构造函数
	NodeAttr(int i)	{ op = i; }
	NodeAttr(char c) { valc = c; }
};


struct Node
{
	struct Node *children[MAX_CHILDREN];	// 孩子结点
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

Node * tree::NewRoot(int kind, int kind_kind, NodeAttr attr, int type,
			  Node *child1, Node *child2, Node *child3 , Node *child4)
{
	Node* node = new Node();
	node->kind = kind;
	node->kind_kind = kind_kind;
	node->attr = attr;
	node->children[0] = child1;
	node->children[1] = child2;
	node->children[2] = child3;
	node->children[3] = child4;

	return node;
}

void tree::get_addr(void)
{
	cout << "allocate memory..." << endl;
	offset = 0;
	recursive_get_addr(root);		// 接口函数直接调用实际分配空间的递归函数
}



void tree::recursive_get_addr(Node *t)
{
	if (t) {		// 空指针什么也不做
		if (t->kind == EXPR_NODE) {	// 为表达式结点分配存储空间
			t->addr = offset++;
			//cout << t->addr << endl;
		}
		for (int i = 0; i < MAX_CHILDREN; i++)	// 递归处理所有子树——先序遍历
			recursive_get_addr(t->children[i]);
	}
}

void tree::execute(void)
{
	cout << "execute..." << endl;
	recursive_execute(root);				// 接口函数调用递归函数
	cout << my_mem[root->addr] << endl;	// 从内存取出执行结果，输出
}

void tree::recursive_execute(Node *t)
{
	if (t) {
		for (int i = 0; i < MAX_CHILDREN; i++)	// 后序遍历
			recursive_execute(t->children[i]);
		if (t->kind == EXPR_NODE)			// 表达式结点
			if (t->kind_kind == OP_EXPR) {		// 运算类型表达式
				if (t->attr.op == PLUS)			// 加法表达式
					// 从内存（my_mem）中取出两个孩子的值，进行加法，结果写回内存
					my_mem[t->addr] = my_mem[t->children[0]->addr] + my_mem[t->children[1]->addr]; 
				else if (t->attr.op == MINUS)	// 减法的处理类似加法
					my_mem[t->addr] = my_mem[t->children[0]->addr] - my_mem[t->children[1]->addr];
			}
			else if (t->kind_kind == CONST_EXPR)	// 常量表达式，将值（在vali中）保存至分配的内存中
				my_mem[t->addr] = t->attr.vali;

	}
}

int main(int argc, char *argv[])
{
	tree expr;
	Node *p, *q, *r;

	// 创建结点9
	p = expr.NewRoot(EXPR_NODE, CONST_EXPR, NodeAttr(9), Integer);
	// 创建结点5
	q = expr.NewRoot(EXPR_NODE, CONST_EXPR, NodeAttr(5), Integer);
	// 创建减法结点，孩子结点为9和5
	r = expr.NewRoot(EXPR_NODE, OP_EXPR, NodeAttr(PLUS), Integer, p, q);
	//q = expr.NewRoot(EXPR_NODE, CONST_EXPR, NodeAttr(2), Integer);
    //p = expr.NewRoot(EXPR_NODE, OP_EXPR, NodeAttr(PLUS), Integer, r, q);
	expr.setRoot(r);
	expr.get_addr();	// 为（子）表达式（们）分配存储空间
	expr.execute();	// 执行代码
}

