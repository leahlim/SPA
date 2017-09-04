#pragma once
#include <vector>
using namespace std;

class Statement;
#include "Statement.h"

class StatementList {
private:
	vector<Statement> statements;
public:
	StatementList();
	~StatementList();
	void addStatement(Statement &stmt);
};