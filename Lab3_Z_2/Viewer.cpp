#include "Viewer.h"
#include <random>
Viewer::Viewer() {};
int Viewer::visit(int _visit) {
	return place = rand() % _visit;
}