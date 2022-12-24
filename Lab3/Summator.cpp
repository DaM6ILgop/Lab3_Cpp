#include "Summator.h"
#include <iostream>
#include <vector>

Summator::Summator(int size) {
	vectorSum.resize(size);
}

void Summator::setOperand(double* arr, int size) {

	for (int i = 0; i < size; i++) {

		vectorSum[i] = arr[i]; //Установка значений в массив
	}

}
void Summator::calculate() { //расчет

	std::cout << "\n\nExpression: " << "[" << vectorSum.size() << "]";
	for (int i = 0; i < vectorSum.size(); i++){

		rezult += vectorSum[i];		

	} //вывод на экран
	printf("\n%1.0lf + (%1.0lf) + %1.1lf + %1.0lf + (%1.0lf) + (%1.0lf)\n",
		vectorSum[0],
		vectorSum[1],
		vectorSum[2],
		vectorSum[3],
		vectorSum[4],
		vectorSum[5]);
	std::cout << "Result : " << "[" << rezult << "]";
}


