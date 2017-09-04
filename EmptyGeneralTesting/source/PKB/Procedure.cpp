#include <string>
using namespace std;

#include "Procedure.h"

Procedure::Procedure(string name) {
	procName = name;
}

void Procedure::addStatement(Statement stmt) {
	stmtLst.addStatement(stmt);
}