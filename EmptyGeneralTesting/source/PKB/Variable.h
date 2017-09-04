#pragma once
#include <string>
#include <vector>
using namespace std;

#include "Statement.h"

/*
A simplified Variable class implement to try out Unit Testing.
Full implementation to be completed later.
*/
class Variable {
private:
	int index;
	string varName;
	vector<Statement> modifyStmtLst;
	vector<Statement> useStmtLst;
public:
	Variable();
	Variable(int ind, string name);
	~Variable();
	void addModifyStmt(Statement stmt);
	void addUseStmt(Statement stmt);
};