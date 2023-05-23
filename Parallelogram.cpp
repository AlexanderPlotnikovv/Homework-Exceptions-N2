#include<iostream>
#include"Parallelogram.h"
#include "FigureExceptions.h"

void Parallelogram::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
Parallelogram::Parallelogram(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1, std::string Name) : Parallelogram::Quadrangle(a1, b1, c1, d1, A1, B1, C1, D1, Name) {
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