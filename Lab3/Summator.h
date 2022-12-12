#pragma once
#include "ExpressionEvaluator.h"
#include <vector>

class Summator : public ExpressionEvaluator{
public:
	Summator(int size);

	void setOperand(double* arr, int size);

	void calculate();
private:
	double rezult = 0;
	std::vector<double> vectorSum;
};

