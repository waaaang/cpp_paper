#pragma once

using namespace std;

class Point
{
public:
	Point(int x, int y);
	Point(const Point& other);
	~Point();
	void show();
	void set(int xx, int yy);
private:
	int x;
	int y;
};

class Line
{
public:
	Line(int x1, int y1, int x2, int y2);
	Line(const Line& other);
	~Line();
	void show();
private:
	Point m_p1, m_p2;
};