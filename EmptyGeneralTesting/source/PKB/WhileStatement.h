#pragma once

#include "StatementContainer.h"

class WhileStatement : public StatementContainer {
private:
	Variable controlVar;
public:
	WhileStatement();
	~WhileStatement();
	void addControlVar(Variable v);
	void addStatement(Statement stmt);
};