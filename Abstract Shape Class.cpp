// Abstract Shape Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main()
{
	// Create an array of Shape pointers, initialized with the addresses of the 2 dynamically allocated objects

	const int NUM_SHAPES = 4;
	BasicShape* shapes[] =
	{
		new Circle(5, 8, 3.5, "Circle_1"),
		new Rectangle(10, 20, "Rectangle_1"),
		new Circle(-2, 4, 5.6, "Circle_2"),
		new Square(6, "Square_1")
	};

	for (int i = 0; i < NUM_SHAPES; i++)
	{
		cout << "Shape: " << i+1 << ". " << shapes[i]->getName() << " area = " << shapes[i]->getArea() << endl;
	}
}

