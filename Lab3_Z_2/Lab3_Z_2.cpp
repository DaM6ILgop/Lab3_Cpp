#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <Windows.h>
#include "Human.h"


int main() {

	setlocale(LC_ALL, "ru");
	Human* human[5];
	human[0] = new Human("Гоша", "Алексеевич", "Ж", 38, "Кларнет", 2 );

	human[1] = new Human();
	human[1]->setName("Владимир");
	human[1]->setFatherName("Георгиевич");
	human[1]->setSex("М");
	human[1]->setAge(27);	
	human[1]->setMusicalInstruments("Пианино");
	human[1]->setperformanceScore(4);

	human[2] = new Human();
	human[2]->setName("Галя");
	human[2]->setFatherName("Сергеевна");
	human[2]->setSex("Ж");
	human[2]->setAge(57);
	human[2]->setMusicalInstruments("Гитара");
	human[2]->setperformanceScore(3);

	human[3] = new Human();
	human[3]->setName("Дмитрий");
	human[3]->setFatherName("Васильев");
	human[3]->setSex("Реальный мужик");
	human[3]->setAge(32);
	human[3]->setMusicalInstruments("Баян");
	human[3]->setperformanceScore(5);

	human[4] = new Human();
	human[4]->setName("Сестра Гали, Влада");
	human[4]->setFatherName("Сергеевна");
	human[4]->setSex("Ж");
	human[4]->setAge(57);
	human[4]->setMusicalInstruments("Пианино");
	human[4]->setperformanceScore(4);

	for (int i = 0; i < 5; i++) {
		if (human[i]->getMusicalInstruments(*human[i]) == "Пианино") {
			human[i]->print();
		}
	}

	for (int i = 0; i < 5; i++) {
		if (human[i]->getMusicalInstruments(*human[i]) != "Пианино") {
			human[i]->print();
		}
	}

	
	std::cout << "Нажмите 1 для записи в файл ";
	
	std::string path = "musician.txt";
	int action;

	std::cin >> action;

	bool flag = true;
	
	switch (action)
	{
		case 1:
		for (int i = 0; i < 5; i++) {
			human[i]->serialize(path);
		}
	default:
		std::cout << "Что-то пошло не так";
		break;
	}
	
	
}

