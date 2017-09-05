#pragma once
#define DllExport __declspec( dllexport )
#include "StatementContainer.h"
#include "Statement.h"

class DllExport WhileStatement : public StatementContainer, public Statement {
private:
	Variable controlVar;
public:
	WhileStatement();
	~WhileStatement();
	void addControlVar(Variable v);
	void addStatement(Statement stmt);
};