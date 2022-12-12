#pragma once
#include <sstream>
#include <fstream>
class ExpressionEvaluator
{
public:
	ExpressionEvaluator() {};

	virtual void calculate();

	virtual void setOperand(double* arr, int size);

	virtual void setOperand(double a_, double b_, double c_);

	virtual void logToFile(std::string filename);

	virtual ~ExpressionEvaluator(){};
};

