#include "Variable.h"

Variable::Variable(int i, string name) {
	index = i;
	varName = name;
}

void Variable::addModifyStmt(Statement stmt) {
	modifyStmtLst.push_back(stmt);
}

void Variable::addUseStmt(Statement stmt) {
	useStmtLst.push_back(stmt);
}