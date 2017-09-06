#include "StatementList.h"

StatementList::StatementList() {

}

void StatementList::addStatement(Statement &stmt) {
	statements.push_back(stmt);
	stmt.setStmtLst(*this);
}