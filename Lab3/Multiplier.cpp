#include "Multiplier.h"
#include "ExpressionEvaluator.h"
#include <iostream>

Multiplier::Multiplier(){}

void Multiplier::setOperand(double a_, double b_, double c_) {
	a = a_;
	b = b_;
	c = c_;
}
double Multiplier::Get() {
	return a*b*c;
}
void Multiplier::calculate() {
	
	std::cout << "\n\nExpression: " << "[" << "3" << "]";
	rezult = Get();
	printf("\n(%1.0lf) * %1.0lf * %1.1lf ", a, b, c);
	std::cout << "\nResult : " << "[" << rezult << "]";
}