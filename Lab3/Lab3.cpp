#include <iostream>
#include <ios>
#include <fstream>

#include "ExpressionEvaluator.h"
#include "CustomExpressionEvaluator.h"
#include "Summator.h"
#include "Multiplier.h"

using namespace std;
int main() {

	setlocale(LC_ALL, "ru");

	ExpressionEvaluator* evaluator[3];
	
	evaluator[0] = new CustomExpressionEvaluator(5);
	evaluator[1] = new Summator(6);
	evaluator[2] = new Multiplier();

	double arr[5] = {1, -5, 2.5, 10, 8};
	double arrSummator[6] = { 15, -7.5, 3.2, 8.7,-1.5, -9.5 };

	evaluator[0]->setOperand(arr, 5); 
	evaluator[1]->setOperand(arrSummator, 6);
	evaluator[2]->setOperand(-8, 7, 0.5);
	

	for (int i = 0; i <3; i++){

		evaluator[i]->logToFile("lab3.txt");
		evaluator[i]->calculate();	
	}

};

