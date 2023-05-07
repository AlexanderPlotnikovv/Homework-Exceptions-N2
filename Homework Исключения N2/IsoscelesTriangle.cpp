#include<iostream>
#include"IsoscelesTriangle.h"

void IsoscelesTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
IsoscelesTriangle::IsoscelesTriangle() : Triangle(10, 20, 10, 50, 60, 50, "Isosceles triangle") {}