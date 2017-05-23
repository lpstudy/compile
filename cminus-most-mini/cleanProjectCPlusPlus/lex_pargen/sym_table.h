#include <iostream>
#include <map>
#include <vector>
#include "yacc.h"
#include "lex.h"
using namespace std;

struct Node;
struct TableNode
{
	string name;
	double value;
	Node* p_node;//also store the corresponding node pointer of name
};
class SymTable
{
public:
	SymTable(){

	}
public:
	int lookup(const string& name){
		for (int i = 0; i < idValueTable.size(); ++i)
		{
			if(idValueTable[i].name.compare(name) == 0){
				return i;
			}
		}
		return -1;//not find
	}

	int insert(const string& name){//when parser x=2 (current we get x)
		TableNode node;
		node.name = name;
		node.value = 0.0;
		node.p_node = NULL;
		idValueTable.push_back(node);
		return idValueTable.size()-1;
	}
	void setValue(int pos, double value){//when parser x=2 (current we get x)
		idValueTable[pos].value = value;
	}
	double getValue(int pos){
		return idValueTable[pos].value;
	}
	Node* getNode(int pos){
		return idValueTable[pos].p_node;
	}
	void setNode(int pos, Node* p){
		idValueTable[pos].p_node = p;
	}
	const string& getName(int pos){
		return idValueTable[pos].name;
	}
private:
	vector<TableNode> idValueTable;
};
extern SymTable sym_table;