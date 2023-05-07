#include<iostream>
#include"Rhomb.h"

void Rhomb::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}

Rhomb::Rhomb() : Quadrangle(30, 30, 30, 30, 30, 40, 30, 40, "Rhomb") {}