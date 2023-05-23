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
#include "FigureExceptions.h"

int main()
{
	try {
		Triangle triangle(10,20,30,50,60,70,"Triangle");
		Quadrangle quadrangle(10,20,30,40,50,80,100,130,"Quadrangle");
		RectangularTriangle rectangularTriangle(10,20,30,40,50,90,"Rectangular triangle");
		IsoscelesTriangle isoscelesTriangle(10,20,10,50,80,50,"Isosceles triangle");
		EqualateralTriangle equalateralTriangle(30,30,30,60,60,60,"Equalateral triangle");
		Parallelogram parallelogram(10,20,10,20,40,140,40,140,"Parallelogram");
		Rectangle rectangle(20,10,20,10,90,90,90,90,"Rectangle");
		Rhomb rhomb(20,20,20,20,30,150,30,150,"Rhomb");
		Square square(20, 20, 20, 20, 90, 90, 90, 90, "Square");
	}
	catch (const FigureExceptions& exception) { std::cout << exception.what() << std::endl; }
	return 0;
}