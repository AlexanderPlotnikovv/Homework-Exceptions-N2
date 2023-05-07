#include<iostream>
#include"Parallelogram.h"
#include "FigureExceptions.h"

void Parallelogram::print_info() {
	std::cout << Name << ":" << std::endl;
	std::cout << "Sides: a = " << a1 << ", b = " << b1 << ", c = " << c1 << ", d = " << d1 << std::endl;
	std::cout << "Angles: A = " << A1 << ", B = " << B1 << ", C = " << C1 << ", D = " << D1 << std::endl;
	std::cout << std::endl;
}
Parallelogram::Parallelogram() : Quadrangle(20, 30, 20, 30, 30, 40, 30, 40, "Parallelogram") {
	if (a1 != c1 || b1 != d1 || A1 != C1 || B1 != D1) { throw FigureExceptions(); }
}