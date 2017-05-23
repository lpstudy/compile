#include <iostream>
#include <map>
#include <vector>
#include "yacc.h"
#include "lex.h"
using namespace std;

struct Node
{
	string name;
	double value;
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
		Node node;
		node.name = name;
		node.value = 0.0;
		idValueTable.push_back(node);
		return idValueTable.size()-1;
	}
	void setValue(int pos, double value){//when parser x=2 (current we get x)
		idValueTable[pos].value = value;
	}
	double getValue(int pos){
		return idValueTable[pos].value;
	}
private:
	vector<Node> idValueTable;
};
extern SymTable sym_table;