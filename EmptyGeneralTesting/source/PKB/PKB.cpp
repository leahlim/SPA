#include <vector>
using namespace std;

#include "PKB.h"
#include "Procedure.h"
/*
Represents a parsed SIMPLE program
*/
void PKB::addProcedure(Procedure proc) {
	allProcedures.push_back(proc);
}

void PKB::addVariable(Variable var) {
	allVariables.push_back(var);
}

void PKB::addStatement(Statement stmt) {
	allStatements.push_back(stmt);
}

/*
Add AssignStatement stmt to the AST.
*/
void PKB::addAssignStatement(AssignStatement stmt, bool endOfList) {
	//currentStmtContainer stack guaranteed to be non-empty
	StatementContainer * stmtContainer = &currentStmtContainer.top();
	(*stmtContainer).addStatement(stmt);
	if (endOfList) {
		currentStmtContainer.pop();
	}
}

/*
Add WhileStatement stmt to the AST.
*/
void PKB::addWhileStatement(WhileStatement stmt)