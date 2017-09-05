#pragma once
#define DllExport __declspec( dllexport )
#include <string>
using namespace std;

class StatementList;
#include "StatementList.h"
/*
Currently just a dummy Statement class implemented for the purpose of
trying Unit Testing.
Full implementation to be done later by Shermine.
*/
class DllExport Statement {
protected:
	int index;
	string contentStatement;
	StatementList * stmtLst;
public:
	Statement();
	Statement(int i, string content);
	~Statement();
	void setStmtLst(StatementList &stmtList);
};