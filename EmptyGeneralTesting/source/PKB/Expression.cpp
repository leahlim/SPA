#include "Expression.h"

Expression::Expression(string ope) {
	op = ope;
}

void Expression::addLeftExp(Expression exp) {
	leftExp = &exp;
}

void Expression::addRightExp(Expression exp) {
	rightExp = &exp;
}

void Expression::addLeftVar(Variable var) {
	leftVar = var;
}

void Expression::addRightVar(Variable var) {
	rightVar = var;
}
