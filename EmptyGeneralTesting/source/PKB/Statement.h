#pragma once
#include <string>
using namespace std;

class StatementList;
#include "StatementList.h"
/*
Currently just a dummy Statement class implemented for the purpose of
trying Unit Testing.
Full implementation to be done later by Shermine.
*/
class Statement {
protected:
	int index;
	string contentStatement;
	StatementList * stmtLst;
public:
	Statement();
	Statement(int i, string content);
	void setStmtLst(StatementList &stmtList);
};