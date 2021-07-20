#pragma once

using namespace std;

class Circle
{
public:
	Circle();
	Circle(double r);
	Circle(const Circle& other);
	~Circle();
	double area();
	void setRadium(double r);
	void show();
	void show1();
private:
	double radium;
};