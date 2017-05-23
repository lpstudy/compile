#include "tree.h"
#include "sym_table.h"
#include <math.h>

tree parser_tree;

double my_mem[10000];			// “内存”
int offset;


Node * tree::NewRoot(int kind, int kind_kind, NodeAttr attr, int type,
	Node *child1, Node *child2, Node *child3 , Node *child4)
{
	Node* node = new Node();
	node->sibling = NULL;
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
			//cout << t->addr << " | "<<t->kind<<" " <<t->kind_kind<<endl;
		}
		for (int i = 0; i < MAX_CHILDREN; i++)	// 递归处理所有子树——先序遍历
			recursive_get_addr(t->children[i]);
		//TODO: 专门的sibing到children的转换函数。
		recursive_get_addr(t->sibling);
	}
}

void tree::execute(void)
{
	cout << "execute..." << endl;
	recursive_execute(root);				// 接口函数调用递归函数
	//cout << my_mem[root->addr] << endl;	// 从内存取出执行结果，输出
}
/*
功能逐步添加摘要：
if条件判断功能：
根据if的condition来决定是否执行statement代码，因此不能首先对其所有的孩子进行后续遍历，需要根据第一个孩子的执行结果来决定是否执行第二个孩子。
while循环功能：
此功能框架代码与if功能相似，只是多了一个while循环而已
变量赋值：
读取用户输入，并赋值到变量，支持input(a)，它将用户的输入赋值到变量a，a为其第一个孩子。
赋值语句：
支持a=2，包括两个孩子，左边为变量，右边为值，当前值为左边的值。
输入功能：
能够接收用户输入，并赋值到变量中，前提需要增加赋值功能
输出功能：
构建输出语句，它只有一个孩子，即要输出的变量。
*/
void tree::recursive_execute(Node *t)
{
	if (t) {
//		printf("deal with recursive_execute:%d %d\n", t->kind, t->kind_kind);
		if(t->kind == STMT_NODE){
			if(t->kind_kind == IF_STMT){
				//if条件判断结果，第二个孩子存储if成功的代码，第三个孩子存储else成功的代码
				recursive_execute(t->children[0]);
				if (my_mem[t->children[0]->addr] )
					recursive_execute(t->children[1]);
				else
					recursive_execute(t->children[2]);
			}else if(t->kind_kind == WHILE_STMT){
				//第一个孩子存储条件判断结果，第二个孩子存储while成功的代码
				recursive_execute(t->children[0]);
				while (my_mem[t->children[0]->addr])
				{
					recursive_execute(t->children[1]);
					recursive_execute(t->children[0]);
				}
			}else if(t->kind_kind == INPUT_STMT){//input statement has one expr child
				cout<<"please input data:";
				cin>>my_mem[t->children[0]->addr];
				int seq = t->children[0]->attr.symtbl_seq;
				sym_table.setValue(seq, my_mem[t->children[0]->addr]);//修改符号表
			}else if(t->kind_kind == PRINT_STMT){//print statement has one expr child to print.
				recursive_execute(t->children[0]);
				int seq = t->children[0]->attr.symtbl_seq;
				const string& name = sym_table.getName(seq);
				cout<<name.c_str()<<" = "<<my_mem[t->children[0]->addr]<<endl;
			}else if(t->kind_kind == COMP_STMT){//组合语句，逐个语句执行即可。
				Node* p = t->children[0];
				while (p)
				{
					recursive_execute(p);
					p = p->sibling;
				}
				//for (int i = 0; i < MAX_CHILDREN; ++i)
				//	recursive_execute(t->children[i]);                     
			}else if(t->kind_kind == EXPR_STMT){
				recursive_execute(t->children[0]);
			}
		}
		if (t->kind == EXPR_NODE){			// 表达式结点
			recursive_execute(t->children[0]);
			recursive_execute(t->children[1]);

			if (t->kind_kind == OP_EXPR) {		// 运算类型表达式
				if (t->attr.op == PLUS)			// 加法表达式
					// 从内存（my_mem）中取出两个孩子的值，进行加法，结果写回内存
					my_mem[t->addr] = my_mem[t->children[0]->addr] + my_mem[t->children[1]->addr]; 
				else if (t->attr.op == MINUS)	// 减法的处理类似加法
					my_mem[t->addr] = my_mem[t->children[0]->addr] - my_mem[t->children[1]->addr];
				else if (t->attr.op == TIMES)
					my_mem[t->addr] = my_mem[t->children[0]->addr] * my_mem[t->children[1]->addr];
				else if (t->attr.op == OVER){
					if(my_mem[t->children[1]->addr] == 0){
						cout<<"error: divide by zero"<<endl;
						my_mem[t->addr] = 0;
					}else{
						my_mem[t->addr] = my_mem[t->children[0]->addr] / my_mem[t->children[1]->addr];
					}
				}
				else if (t->attr.op == AND)
					my_mem[t->addr] = my_mem[t->children[0]->addr] && my_mem[t->children[1]->addr];
				else if (t->attr.op == OR)
					my_mem[t->addr] = my_mem[t->children[0]->addr] || my_mem[t->children[1]->addr];
				else if (t->attr.op == EQ)
					my_mem[t->addr] = (my_mem[t->children[0]->addr] == my_mem[t->children[1]->addr]);
				else if (t->attr.op == GT)
					my_mem[t->addr] = my_mem[t->children[0]->addr] > my_mem[t->children[1]->addr];
				else if (t->attr.op == LT)
					my_mem[t->addr] = (my_mem[t->children[0]->addr] < my_mem[t->children[1]->addr]);
				else if (t->attr.op == NE)
					my_mem[t->addr] = !(my_mem[t->children[0]->addr] == my_mem[t->children[1]->addr]);
				else if (t->attr.op == GE)
					my_mem[t->addr] = (my_mem[t->children[0]->addr] > my_mem[t->children[1]->addr]) || (my_mem[t->children[0]->addr] == my_mem[t->children[1]->addr]);
				else if (t->attr.op == LE)
					my_mem[t->addr] = (my_mem[t->children[0]->addr] < my_mem[t->children[1]->addr]) || (my_mem[t->children[0]->addr] == my_mem[t->children[1]->addr]);
				else if(t->attr.op == ASSIGN){
					int seq = t->children[0]->attr.symtbl_seq;
					sym_table.setValue(seq, my_mem[t->children[1]->addr]);//修改符号表

					my_mem[t->addr] = my_mem[t->children[0]->addr] = my_mem[t->children[1]->addr];//得到表达式的值
				}else if(t->attr.op == SQRT){
					my_mem[t->addr] = sqrt(my_mem[t->children[0]->addr]);
				}else if(t->attr.op == FABS){
					my_mem[t->addr] = fabs(my_mem[t->children[0]->addr]);
				}else if(t->attr.op == UMINUS_EXPR){
					my_mem[t->addr] = -my_mem[t->children[0]->addr];
				}
			}
			else if (t->kind_kind == CONST_EXPR)	// 常量表达式，将值（在vali中）保存至分配的内存中
				my_mem[t->addr] = t->attr.vali;
			else if(t->kind_kind == ID_EXPR){//变量的值从符号表中取得，不保存在my_mem内存中
				my_mem[t->addr] = sym_table.getValue(t->attr.symtbl_seq);
			}else if(t->kind_kind == NOT_EXPR){
				my_mem[t->addr] = ! my_mem[t->children[0]->addr];
			}

		}//EXPR_NODE
	}
}


Node* createOpExpr(tree& expr, Node* p, Node* q, int type)
{
	Node* p1;
	p1 = expr.NewRoot(EXPR_NODE, OP_EXPR, NodeAttr(type), Integer, p,q);
	return p1;
}
Node* createId(tree& expr)
{
	Node* p;
	p = expr.NewRoot(EXPR_NODE, ID_EXPR, NodeAttr(0), Integer);
	return p;
}
//the Node object is only created once.
Node* createId(tree& expr, int seq) //创建变量节点，其属性存储其符号表的序号
{
	/*
	Node* p;
	p = sym_table.getNode(seq);
	if(p == NULL){
		p = expr.NewRoot(EXPR_NODE, ID_EXPR, NodeAttr(seq), Integer);
		sym_table.setNode(seq, p);
	}
	*/
	Node* p = expr.NewRoot(EXPR_NODE, ID_EXPR, NodeAttr(seq), Integer);
	return p;

}
Node* createConst(tree& expr, double value)
{
	Node* q2;
	q2 = expr.NewRoot(EXPR_NODE, CONST_EXPR, NodeAttr(value), Integer);
	return q2;
}
Node* createSTMT(tree& expr, int type, Node* p1, Node* p2, Node* p3 , Node* p4)
{
	Node* r;
	r = expr.NewRoot(STMT_NODE, type, NodeAttr(), Integer, p1,p2,p3,p4);

	return r;
}
Node* createIfStmt(tree& expr,Node* p1, Node* p2, Node* p3  )
{
	return createSTMT(expr, IF_STMT,  p1, p2, p3);
}
Node* createWhileStmt(tree& expr, Node* p1, Node* p2)
{
	return createSTMT(expr, WHILE_STMT, p1, p2);
}
Node* createInputStmt(tree& expr, Node* p)
{
	return createSTMT(expr, INPUT_STMT, p);
}
Node* createOutStmt(tree& expr, Node* p)
{
	return createSTMT(expr, PRINT_STMT, p);
}
Node* createExprStmt(tree& expr, Node* p)
{
	return expr.NewRoot(STMT_NODE, EXPR_STMT, NodeAttr(0), Integer, p);//xxxx; xxxx为表达式，组合成语句
}
Node* createAssignStmt(tree& expr, Node* variable, int value)
{
	Node* p = variable;
	Node *q, *r, *s;
	q = createConst(expr, value);
	r = createOpExpr(expr, p,q, ASSIGN);

	return createExprStmt(expr, r);
}
Node* createAssignStmt(tree& expr, Node* variable, Node* q)
{
	Node* p = variable;
	Node *r, *s;
	r = createOpExpr(expr, p,q, ASSIGN);

	return createExprStmt(expr, r);
}
Node* createCompStmt(tree& expr, Node* p1, Node* p2, Node* p3, Node* p4)
{
	return createSTMT(expr, COMP_STMT, p1,p2,p3,p4);
}
void executeTree(tree& expr, Node* root)
{
	expr.setRoot(root);
	expr.get_addr();	// 为（子）表达式（们）分配存储空间
	expr.execute();	// 执行代码
	cout<<endl;
}
void executeTree(tree& expr)
{
	expr.get_addr();	// 为（子）表达式（们）分配存储空间
	expr.execute();	// 执行代码
	cout<<endl;
}

/*
if:  st_if -> (condition, action)
while: st_while->(condition, action)
*/
void basicTest()
{
	tree expr;
	Node *p, *q, *r;

	// 创建结点a
	p = expr.NewRoot(EXPR_NODE, CONST_EXPR, NodeAttr(9), Integer);
	// 创建结点5
	q = expr.NewRoot(EXPR_NODE, CONST_EXPR, NodeAttr(5), Integer);
	// 创建减法结点，孩子结点为9和5
	r = expr.NewRoot(EXPR_NODE, OP_EXPR, NodeAttr(MINUS), Integer, p, q);
	// q = expr.NewRoot(EXPR_NODE, CONST_EXPR, NodeAttr(2), Integer);
	// p = expr.NewRoot(EXPR_NODE, OP_EXPR, NodeAttr(PLUS), Integer, r, q);
	expr.setRoot(r);
	expr.get_addr();	// 为（子）表达式（们）分配存储空间
	expr.execute();	// 执行代码
}
void assignTest()
{
	/*
	a = 1
	output(a)

	两个语句
	*/

	tree expr;
	Node *p, *q, *r, *s, *o, *u, *t;

	//构建赋值语句
	// 创建结点a
	p = expr.NewRoot(EXPR_NODE, ID_EXPR, NodeAttr(0), Integer);
	// 创建结点1
	q = expr.NewRoot(EXPR_NODE, CONST_EXPR, NodeAttr(5), Integer);
	//赋值
	r = expr.NewRoot(EXPR_NODE, OP_EXPR, NodeAttr(ASSIGN), Integer, p, q);
	s = expr.NewRoot(STMT_NODE, EXPR_STMT, NodeAttr(0), Integer, r);//赋值语句：孩子赋值表达式


	//构建输出语句
	t = expr.NewRoot(STMT_NODE, PRINT_STMT, NodeAttr(), Integer, p);

	//构建组合语句
	o = expr.NewRoot(STMT_NODE, COMP_STMT, NodeAttr(), Integer, s, t);

	expr.setRoot(o);
	expr.get_addr();	// 为（子）表达式（们）分配存储空间
	expr.execute();	// 执行代码
	cout<<endl;
}

void inputOutTest()
{
	/*
	input(a)
	output(a)
	*/
	tree expr;
	Node *p, *q, *r, *s, *o, *u, *t;

	//输入语句
	// 创建结点a
	p = expr.NewRoot(EXPR_NODE, ID_EXPR, NodeAttr(0), Integer);
	s = createInputStmt(expr, p);
	q = createOutStmt(expr, p);
	o = createCompStmt(expr, s, q);

	executeTree(expr, o);
}
void ifTest()
{
	/*
	a = 1
	if(a>10){
	  a = 11
	}else{
	  a = 7
	}
	print(a)
	*/
	tree expr;
	Node *p, *q, *r, *s, *o, *u, *t;

	//输入语句
	// 创建结点a
	p = expr.NewRoot(EXPR_NODE, ID_EXPR, NodeAttr(0), Integer);
	s = createAssignStmt(expr, p, 1);//a=1


	//if语句
	q = createOpExpr(expr, p, createConst(expr, 10), GT);//a>10
	r = createIfStmt(expr, q, createAssignStmt(expr, p, 11), createAssignStmt(expr, p, 7));//if(a>10) a=11 else a=7

	//构建输出语句
	t = createOutStmt(expr, p);//print(a)

	//构建组合语句
	o = createCompStmt(expr,s ,r, t );

	executeTree(expr , o);
}
void whileTest()
{
	/*
	a =1
	sum = 0
	while(a <= 10){
	   sum = sum + a
	   a = a+1;
	}
	print(sum)
	*/

	tree expr;
	Node *p, *q, *r, *s, *o, *u, *t,*p1,*q1;
	p = createId(expr);//a
	q = createId(expr);//sum
	p1 = createAssignStmt(expr,p, 1);//a=1
	q1 = createAssignStmt(expr, q, 0);//sum=0

	Node *a, *b, *c, *d, *e, *f, *g;
	a = createOpExpr(expr, p, createConst(expr, 10), LE);//a<=10
	b = createOpExpr(expr, p, q, PLUS);//sum+a
	c = createAssignStmt(expr, q, b);//sum = sum+a

	d = createOpExpr(expr, p, createConst(expr, 1), PLUS);
	e = createAssignStmt(expr, p, d);	//a=a+1
	f = createCompStmt(expr, c, e); //{sum = sum+a, a= a+1}
	r = createWhileStmt(expr, a,  f);//while

	t = createOutStmt(expr, q);//print sum

	o = createCompStmt(expr, p1, q1, r, t);

	executeTree(expr, o);
}

void whileInputTest()
{
	/*
	a = 1
	sum = 0
	input(x)
	while(a <= x){
	   sum = sum + a
	   a = a+1;
	}
	print(sum)
	*/

	tree expr;
	Node *p, *q, *r, *s, *o, *u, *t,*p1,*q1;
	p = createId(expr);//a
	q = createId(expr);//sum
	p1 = createAssignStmt(expr, p, 1);//a=1
	q1 = createAssignStmt(expr, q, 0);//sum=0

	Node *a, *b, *c, *d, *e, *f, *g;
	g = createId(expr);//x
	f = createInputStmt(expr,g);
	u = createCompStmt(expr, p1, q1, f);//first 3 sentences. because Comp not support more than 4 children.

	a = createOpExpr(expr, p, g, LE);//a<=x, x from input
	b = createOpExpr(expr, p, q, PLUS);//sum+a
	c = createAssignStmt(expr, q, b);//sum = sum+a

	d = createOpExpr(expr, p, createConst(expr, 1), PLUS);
	e = createAssignStmt(expr, p, d);	//a=a+1
	f = createCompStmt(expr, c, e); //{sum = sum+a, a= a+1}
	r = createWhileStmt(expr, a,  f);//while

	t = createOutStmt(expr, q);//print sum

	o = createCompStmt(expr, u, r, t);

	executeTree(expr, o);
}

int xxx(int argc, char *argv[])
{
	//assignTest();
	//inputOutTest();
	//ifTest();

	//whileTest();
	whileInputTest();
	return 0;
}
