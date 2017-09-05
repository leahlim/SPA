#pragma once
#define DllExport __declspec( dllexport )
#include <string>
using namespace std;

#include "Variable.h"

/*
This class represents a dummy expression
*/
class DllExport Expression {
private:
	string op;
	Expression * leftExp;
	Expression * rightExp;
	Variable leftVar;
	Variable rightVar;
public:
	Expression();
	Expression(string ope);
	~Expression();
	void addLeftExp(Expression exp);
	void addRightExp(Expression exp);
	void addLeftVar(Variable var);
	void addRightVar(Variable var);
};