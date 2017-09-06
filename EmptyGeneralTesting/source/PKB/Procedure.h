#pragma once
#include <string>
#include <vector>
using namespace std;
#include "StatementContainer.h"
#include "StatementList.h"

class Procedure: public StatementContainer {
private:
	int index;
	string procName;
	StatementList stmtLst;
public:
	Procedure(string name);
	void addStatement(Statement stmt);
};