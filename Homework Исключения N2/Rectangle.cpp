#include<iostream>
#include"Rectangle.h"

void Rectangle::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
Rectangle::Rectangle() : Quadrangle(10, 20, 10, 20, 90, 90, 90, 90, "Rectangle") {}