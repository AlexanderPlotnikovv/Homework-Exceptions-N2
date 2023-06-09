#include<iostream>
#include "Triangle.h"
#include "FigureExceptions.h"

void Triangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
int Triangle::amount_sides() { return 3; }
Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string Name) : a(a), b(b), c(c), A(A), B(B), C(C), Figure(Name) 
{
	print_info();
	if (Triangle::amount_sides() != 3)
	{
		throw FigureExceptions("You added incorrect amount of sides!");
	}
	else if (A + B + C != 180)
	{
		throw FigureExceptions("Incorrect amount of angles!");
	}
}