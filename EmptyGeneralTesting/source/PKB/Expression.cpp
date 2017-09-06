#include "Expression.h"

Expression::Expression() {

}

Expression::Expression(string ope) {
	op = ope;
	leftExp = 0;
	rightExp = 0;
	leftVar = 0;
	rightVar = 0;
}

void Expression::addLeftExp(Expression& exp) {
	leftExp = &exp;
}

void Expression::addRightExp(Expression& exp) {
	rightExp = &exp;
}

void Expression::addLeftVar(Variable& var) {
	leftVar = &var;
}

void Expression::addRightVar(Variable& var) {
	rightVar = &var;
}
