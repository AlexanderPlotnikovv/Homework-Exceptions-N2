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
	Triangle(int a, int b, int c, int A, int B, int C, std::string Name);
public:
	Triangle();
	void print_info() override;
};