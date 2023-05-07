#include<iostream>
#include"EqualateralTriangle.h"

void EqualateralTriangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a << ", b = " << b << ", c = " << c << std::endl;
	std::cout << "Angles: A = " << A << ", B = " << B << ", C = " << C << std::endl;
	std::cout << std::endl;
}
EqualateralTriangle::EqualateralTriangle() : Triangle(30, 30, 30, 60, 60, 60, "Equalateral triangle") {}