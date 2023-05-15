#pragma once
#include "FigureClass.h"
#include <string>

class Triangle : public Figure {
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
public:
	Triangle(int a, int b, int c, int A, int B, int C, std::string Name);
	Triangle();
	void print_info() override;
	int amount_sides() override;
};