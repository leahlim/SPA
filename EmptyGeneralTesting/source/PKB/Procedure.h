#pragma once
#define DllExport __declspec( dllexport )
#include <string>
#include <vector>
using namespace std;
#include "StatementContainer.h"
#include "StatementList.h"

class DllExport Procedure: public StatementContainer {
private:
	int index;
	string procName;
	StatementList stmtLst;
public:
	Procedure(string name);
	~Procedure();
	void addStatement(Statement stmt);
};