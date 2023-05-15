#include<iostream>
#include"EqualateralTriangle.h"
#include "FigureExceptions.h"

void EqualateralTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
EqualateralTriangle::EqualateralTriangle() : Triangle(30, 30, 30, 60, 60, 60, "Equalateral triangle") {
	if (Triangle::amount_sides() != 3)
	{
		throw FigureExceptions("You added incorrect amount of sides!");
	}
	else if (A + B + C != 180)
	{
		throw FigureExceptions("Incorrect amount of angles!");
	}
	else if (a != c || b != c || a != b || A != C || A != B || B != C)
	{
		throw FigureExceptions("Angles or sides don't equal!");
	}
}