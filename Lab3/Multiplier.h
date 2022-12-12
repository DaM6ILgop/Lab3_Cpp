#pragma once
#include "ExpressionEvaluator.h"
class Multiplier : public ExpressionEvaluator
{
public:

	Multiplier();
	

	void calculate();

	void setOperand(double a_, double b_, double c_);

	double Get();


private:
	double a;
	double b;
	double c;

	double rezult = 0;
};

