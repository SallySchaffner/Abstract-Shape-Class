#pragma once
#include "Rectangle.h"

class Square: public Rectangle
{

public:
	Square(int s, string n="Square") : Rectangle(s, s) { setName(n); }

};

