#pragma once
#include <exception>
class FigureExceptions : public std::exception {
public:
	const char* what() const override;
};