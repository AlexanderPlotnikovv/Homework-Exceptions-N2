#include <iostream>
#include "FigureExceptions.h"

const char* FigureExceptions::what() const { return a.c_str(); }
FigureExceptions::FigureExceptions(std::string a) : a(a) {}