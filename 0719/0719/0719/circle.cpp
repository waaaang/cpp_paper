#include <iostream>
#include "circle.h"
using namespace std;

Circle::Circle()
{
	cout << "Circle()" << endl;
}

Circle::Circle(double r = 0) : radium(r)
{
	cout << "Circle(double r)" << endl;
}

Circle::Circle(const Circle &other) : radium(other.radium)
{
	cout << "Circle(const Circle &other)" << endl;
}

Circle::~Circle()
{
	cout << "~Circle()" << endl;
}

double Circle::area()
{	
	double a = 0;
	a = 2 * 3.14 * radium;
	return a;
}

void Circle::setRadium(double r)
{
	this->radium = r;
}

void Circle::show()
{
	cout << "radium = " << radium << endl;
}

void Circle::show1()
{
}

//int main()
//{
//	Circle c1(2);
//	c1.show();
//	Circle c2(c1);
//	c2.setRadium(3);
//	c2.show();
//	return 0;
//}