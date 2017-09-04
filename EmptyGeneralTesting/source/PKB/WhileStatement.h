#pragma once

#include "StatementContainer.h"
#include "Statement.h"

class WhileStatement : public StatementContainer, public Statement {
private:
	Variable controlVar;
public:
	WhileStatement();
	~WhileStatement();
	void addControlVar(Variable v);
	void addStatement(Statement stmt);
};