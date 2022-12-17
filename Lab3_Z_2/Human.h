#pragma once
#include <iostream>  
#include <fstream>
class Human
{

protected:

	std::string name;  
	std::string fatherName;
	std::string sex;
	std::string musicalInstruments;
	
	int age;
	int performanceScore;

	
	

public:

	Human();

	Human(std::string _name, std::string _fatherName, std::string _sex, int _age, std::string _musicalInstruments, int _performanceScore);
	
	//Getters///////////////////////////////////////////////////
	virtual int getScore(Human human);
	
	virtual std::string getMusicalInstruments(Human human);
	
	//Setters///////////////////////////////////////////////////
	virtual void setName(std::string _name);
	
	virtual void setFatherName(std::string _fatherName);

	virtual void setSex(std::string _sex);
	
	virtual void setAge(int _age);

	virtual void setMusicalInstruments(std::string _musicalInstruments);

	virtual void setperformanceScore(int _performanceScore);

	//Another//////////////////////////////////////////////////
	virtual void serialize(std::string path);
	virtual void print();
	virtual ~Human();
};

