#pragma once
#include "FigureClass.h"
#include <string>

class Quadrangle : public Figure {
protected:
	int a1;
	int b1;
	int c1;
	int d1;
	int A1;
	int B1;
	int C1;
	int D1;
public:
	Quadrangle(int a1, int b1, int c1, int d1, int A1, int B1, int C1, int D1, std::string Name);
	Quadrangle();
	void print_info() override;
	int amount_sides() override;
};