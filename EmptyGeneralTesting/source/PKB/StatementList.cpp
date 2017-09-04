#include "StatementList.h"

void StatementList::addStatement(Statement &stmt) {
	statements.push_back(stmt);
	stmt.setStmtLst(*this);
}