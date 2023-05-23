#pragma once
#include "Triangle.h"
#include "FigureExceptions.h"

class RectangularTriangle : public Triangle {
public:
	void print_info() override;
	RectangularTriangle(int a, int b, int c, int A, int B, int C, std::string Name);
};