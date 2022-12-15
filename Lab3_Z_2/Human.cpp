#include "Human.h"
//Вова гений
//Constructors
Human::Human() {
}

Human::Human(std::string _name, std::string _fatherName, std::string _sex, int _age, std::string _musicalInstruments, int _performanceScore) {
	name = _name;
	fatherName = _fatherName;
	sex = _sex;
	age = _age;
	musicalInstruments = _musicalInstruments;
	performanceScore = _performanceScore;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////😎 U_U

//Gettres
int Human::getScore(Human human) {
	return performanceScore;
}

std::string Human::getMusicalInstruments(Human human) {
	return musicalInstruments;
}


//Setters
void Human::setName(std::string _name) {
	
}

void Human::setFatherName(std::string _fatherName){

}

void Human::setAge(int _age) {
	
}

void Human::setMusicalInstruments(std::string _musicalInstruments) {
	
}

void Human::setperformanceScore(int _performanceScore) {
	
}


///////////////////////////////////////////////////////////////////////////////////
//Print
void Human::print() {
	std::cout << "\n";
	std::cout << "\n" << "Имя:" << this->name
		<< "\nОтчество: " << this->fatherName
		<< "\nПол: " << this->sex
		<< "\nВозраст: " << this->age
		<< "\nМузыкальный инструмент: " << this->musicalInstruments
		<< "\nБалы учасника: " << this->performanceScore;
	std::cout << "\n";
}

Human::~Human() {

}
