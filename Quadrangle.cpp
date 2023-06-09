#include<iostream>
#include "Quadrangle.h"
#include "FigureExceptions.h"

void Quadrangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
int Quadrangle::amount_sides() { return 4; }
Quadrangle::Quadrangle(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1, std::string Name) : a1(a1), b1(b1), c1(c1), d1(d1), A1(A1), B1(B1), C1(C1), D1(D1), Figure(Name)

{
	print_info();
	if (Quadrangle::amount_sides() != 4)
	{
		throw FigureExceptions("You added incorrect amount of sides!");
	}
	else if (A1 + B1 + C1 + D1 != 360)
	{
		throw FigureExceptions("Incorrect amount of angles!");
	}
}