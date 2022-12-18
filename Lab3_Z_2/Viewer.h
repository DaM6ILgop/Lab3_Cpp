#pragma once
#include "Visitor.h"
class Viewer{
public:
	Viewer();
	int visit(int _visit);

private:
	int place;
	
};

