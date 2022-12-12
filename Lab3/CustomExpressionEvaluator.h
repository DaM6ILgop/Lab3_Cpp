#pragma once
#include "ExpressionEvaluator.h"
#include "Summator.h"
#include <vector>
#include <ios>
#include <sstream>
#include <fstream>
#include <string>
class CustomExpressionEvaluator : public ExpressionEvaluator {
public:

CustomExpressionEvaluator(int size);

void setOperand(double* arr, int size);

void logToFile(const std::string filename);

void calculate();

private:
	std::vector<double> vector;
	double result = 0;
};

