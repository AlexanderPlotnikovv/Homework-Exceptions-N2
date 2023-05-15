#include<iostream>
#include"Parallelogram.h"
#include "FigureExceptions.h"

void Parallelogram::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
Parallelogram::Parallelogram() : Quadrangle(20, 30, 20, 30, 140, 40, 140, 40, "Parallelogram") {
	if (Quadrangle::amount_sides() != 4)
	{
		throw FigureExceptions("You added incorrect amount of sides!");
	}
	else if (A1 + B1 + C1 + D1 != 360)
	{
		throw FigureExceptions("Incorrect amount of angles!");
	}
	else if (A1!=C1||B1!=D1||a1!=c1||b1!=d1)
	{
		throw FigureExceptions("Angles or sides don't equal!");
	}
}