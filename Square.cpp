#include<iostream>
#include"Square.h"
#include "FigureExceptions.h"

void Square::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
Square::Square() : Quadrangle(20, 20, 20, 20, 90, 90, 90, 90, "Square") {
	if (a1 != b1 || a1 != c1 || a1 != d1 || b1 != c1 || b1 != d1 || c1 != d1 || A1 != 90 || B1 != 90 || C1 != 90 || D1 != 90) {throw FigureExceptions(); }
}