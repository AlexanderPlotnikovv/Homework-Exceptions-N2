#include<iostream>
#include"RectangularTriangle.h"

void RectangularTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
RectangularTriangle::RectangularTriangle() : Triangle(10, 20, 30, 50, 60, 90, "Rectangular triangle") {}