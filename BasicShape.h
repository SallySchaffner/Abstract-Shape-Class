// Specification file for BasicShape base class
#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <string>
using namespace std;

class BasicShape
{
private:
	double area = 0;
	string name = "";

public:

	double getArea()
	{
		return area;
	}

	virtual void calcArea() = 0;

	void setArea(double a)
	{
		area = a;
	}

	void setName(string n) 
	{
		name = n;
	}

	string getName() { return name; }

};

#endif