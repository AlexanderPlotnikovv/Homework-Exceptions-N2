#include <iostream>

#include "FigureClass.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "RectangularTriangle.h"
#include "IsoscelesTriangle.h"
#include "EqualateralTriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"

int main()
{
	Triangle triangle;
	Quadrangle quadrangle;
	RectangularTriangle rectangularTriangle;
	IsoscelesTriangle isoscelesTriangle;
	EqualateralTriangle equalateralTriangle;
	Parallelogram parallelogram;
	Rectangle rectangle;
	Rhomb rhomb;
	Square square;
	triangle.print_info();
	quadrangle.print_info();
	rectangularTriangle.print_info();
	isoscelesTriangle.print_info();
	equalateralTriangle.print_info();
	parallelogram.print_info();
	rectangle.print_info();
	rhomb.print_info();
	square.print_info();
	return 0;
}