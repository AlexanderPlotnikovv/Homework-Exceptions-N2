#pragma once
#include "Triangle.h"
class EqualateralTriangle : public Triangle {
public:
	EqualateralTriangle(int a, int b, int c, int A, int B, int C, std::string Name);
	void print_info() override;
};