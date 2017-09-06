#pragma once
#include "Statement.h"
#include "Variable.h"
#include "Expression.h"

class AssignStatement : public Statement {
private:
	Variable modifiedVar;
	vector<Variable> usedVar;
	Expression exp;
public:
	AssignStatement();
	AssignStatement(Variable varModified, vector<Variable> varUsed, Expression ex) {
		modifiedVar = varModified;
		usedVar = varUsed;
		exp = ex;
	}
};