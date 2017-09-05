#pragma once
#define DllExport __declspec( dllexport )
#include "Statement.h"
/*
An abstract interface representing any object that has at least 1 statement list
To be implemented by the following class: Procedure, IfStatement, WhileStatement
*/
class DllExport StatementContainer {
public:
	/*
	Parameter: Statement stmt
	Outcome: stmt is added to the StatementList of this StatementContainer object.
	StatementList of this object should also be added to the StatementList of stmt.
	Set parent of stmt to this Statement Container for if & while statements.
	*/
	virtual void addStatement(Statement stmt) = 0;
};