#include <iostream>
#include "FigureExceptions.h"

const char* FigureExceptions::what() const { return "You entered incorrect values!"; }