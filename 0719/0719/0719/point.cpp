#include <iostream>
#include "point.h"

using namespace std;

Point::Point(int xx, int yy) : x(xx), y(yy)
{

}

Point::Point(const Point &other) : x(other.x), y(other.y)
{

}

Point::~Point()
{
}

void Point::show()
{
	cout << "(" << x << "," << y << ")" << endl;
}

void Point::set(int xx, int yy)
{
	x = xx;
	y = yy;
}



Line::Line(int x1, int y1, int x2, int y2) : m_p1(x1, y1), m_p2(x2, y2)
{
}

Line::Line(const Line& other) : m_p1(other.m_p1), m_p2(other.m_p2)
{
}

Line::~Line()
{
}

void Line::show()
{
	m_p1.show();
	m_p2.show();
}

int main()
{
	Line l(1, 2, 3, 4);
	l.show();

	return 0;
}