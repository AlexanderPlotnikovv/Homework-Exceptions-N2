#include<iostream>
#include"IsoscelesTriangle.h"
#include "FigureExceptions.h"

void IsoscelesTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C, std::string Name) : IsoscelesTriangle::Triangle(a, b, c, A, B, C, Name) {
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