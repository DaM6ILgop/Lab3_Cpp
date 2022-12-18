#pragma once
#include "Human.h"
#include "Visitor.h"
class Violinist : public Human
{
public:
	
	Violinist();
	void visit();
private:
	std::string name;
	std::string fatherName;	
	int concertVal = 0;
};

