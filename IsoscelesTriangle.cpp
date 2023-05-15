#include<iostream>
#include"IsoscelesTriangle.h"
#include "FigureExceptions.h"

void IsoscelesTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
IsoscelesTriangle::IsoscelesTriangle() : Triangle(10, 20, 10, 50, 80, 50, "Isosceles triangle") {
	if (Triangle::amount_sides() != 3)
	{
		throw FigureExceptions("You added incorrect amount of sides!");
	}
	else if (A + B + C != 180)
	{
		throw FigureExceptions("Incorrect amount of angles!");
	}
	else if (a != c || A != C)
	{
		throw FigureExceptions("Angles or sides don't equal!");
	}
}