#pragma once
#include "Quadrangle.h"
class Parallelogram : public Quadrangle {
public:
	Parallelogram(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1, std::string Name);
	void print_info() override;
};