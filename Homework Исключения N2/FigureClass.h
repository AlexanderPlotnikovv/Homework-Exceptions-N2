#pragma once

class Figure {
protected:
	std::string Name;
	Figure(std::string Name);
public:
	virtual void print_info() {};
};