#include<iostream>
#include"RectangularTriangle.h"
#include "FigureExceptions.h"

void RectangularTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
RectangularTriangle::RectangularTriangle() : Triangle(10, 20, 30, 50, 40, 90, "Rectangular triangle") {
	if (Triangle::amount_sides() != 3)
	{
		throw FigureExceptions("You added incorrect amount of sides!");
	}
	else if (A + B + C != 180)
	{
		throw FigureExceptions("Incorrect amount of angles!");
	}
	else if (C != 90)
	{
		throw FigureExceptions("You didn't enter right angle!");
	}
}