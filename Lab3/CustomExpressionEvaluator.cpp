#define _CRT_SECURE_NO_WARNINGS
#include "Summator.h"
#include "CustomExpressionEvaluator.h"
#include <iostream>
#include <ios>
#include <sstream>	
#include <fstream>

	CustomExpressionEvaluator::CustomExpressionEvaluator(int size) {
		vector.resize(size);
	}

	void CustomExpressionEvaluator::setOperand(double* arr, int size) {
		
		for (int i = 0; i < size; i++){
			vector[i] = arr[i];
		}
	}
	void CustomExpressionEvaluator::logToFile(const std::string filename) {
		
		std::ofstream log(filename, std::ios_base::app | std::ios_base::out);
		log << "kjkjkj";
	}
	void CustomExpressionEvaluator::calculate() {
		for (int i = 0; i < vector.size(); i++){
			if(i==0){
				result = vector[0];
			}
			else if(i%2==1 && i!=vector.size()-1){
				result -= vector[i] / vector[i + 1];
				if (i < 4) {
					i++;
				}
			}
			else{
				result -= vector[i];
			}		
		}

		
		std::cout <<"Expression: "<<"["<< vector.size()<<"]";

		printf("\n%1.0lf - (%1.0lf) / (%1.1lf) - %1.0lf / %1.0lf\n", 
			vector[0], 
			vector[1],
			vector[2],
			vector[3],
			vector[4]
			 );
		std::cout << "Result : " << "[" << result << "]";
	}