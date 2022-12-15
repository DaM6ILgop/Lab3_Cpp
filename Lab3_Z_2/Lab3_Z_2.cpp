#include <vector>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <Windows.h>
#include <algorithm>
#include "Human.h"

int main() {

	setlocale(LC_ALL, "ru");
	Human* human[5];
	human[0] = new Human("Гоша", "Алексеевич", "Ж", 38, "Пианино", 2 );
	human[1] = new Human("Валера", "Евгениевич", "М", 39, "Скрипка",3 );
	human[2] = new Human("Света", "Светит", "Ж", 32, "Гитара", 5);
	human[3] = new Human("Таня", "Танчит", "Ж", 99, "Пианино", 4);
	human[4] = new Human("Михаил", "Губа не дура", "М", 48, "Кларнет", 4);		//Сделать через сеттеры часть, которая начинаается посде первого индекса 																
																				//Сеттеры написаны.
	
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
}

