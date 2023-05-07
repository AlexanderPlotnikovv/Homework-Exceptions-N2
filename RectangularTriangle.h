#pragma once
#include "Triangle.h"
#include "FigureExceptions.h"

class RectangularTriangle : public Triangle {
public:
	RectangularTriangle();
	void print_info() override;
};