#pragma once
#include <exception>
class FigureExceptions : public std::exception {
public:
	std::string a;
	const char* what() const override;
	FigureExceptions(std::string a);
};