#pragma once

#include <vector>
#include <stack>
using namespace std;

#include "AssignStatement.h"
#include "Procedure.h"
#include "Statement.h"
#include "Variable.h"
#include "Expression.h"
#include "WhileStatement.h"

/*
Represents a parsed SIMPLE program
*/
class PKB {
private:
	vector<Procedure> allProcedures;
	vector<Variable> allVariables;
	vector<Statement> allStatements;
	stack<StatementContainer> currentStmtContainer;
public:
	PKB();
	~PKB();
	void addProcedure(Procedure proc);
	void addVariable(Variable var);
	void addStatement(Statement stmt);
	/*
	Add an assign statement to the PKB.
	It should be guaranteed by the parser that the statement belong to some valid statement list.
	*/
	void addAssignStatement(AssignStatement stmt, bool endOfList);
	/*
	Add WhileStatement stmt to the PKB.
	Parser should guarantee stmt to be not null and have controlVar attribute filled up
	*/
	void addWhileStatement(WhileStatement stmt);
	//the ones below are for query selector
	vector<int> follow(int stmtIndex);
	vector<int> followBy(int stmtIndex);
	vector<int> follows(int stmtIndex);
	vector<int> followsBy(int stmtIndex);
	vector<int> parent(int stmtIndex);
	vector<int> parentBy(int stmtIndex);
	vector<int> parents(int stmtIndex);
	vector<int> parentsBy(int stmtIndex);
};