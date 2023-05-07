#pragma once
#include <string>
#include "FigureExceptions.h"

class Figure {
protected:
	std::string Name;
public:
	Figure(std::string Name);
	virtual void print_info() {};
	virtual int amount_sides();
};