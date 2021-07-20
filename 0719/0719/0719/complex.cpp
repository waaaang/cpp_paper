#include <iostream>
#include "complex.h"

using namespace std;

Complex::Complex()
{
	cout << "Complex()" << endl;
}

Complex::Complex(double r, double i) : real(r), imag(i) //带参构造函数
{
	cout << "Complex(double r, double i)" << endl;
}

Complex::Complex(const Complex &other) : real(other.real), imag(other.imag) //复制构造函数
{
	cout << "Complex(cosnt Complex &other)" << endl;
}

Complex::~Complex()
{
	cout << "~Complex()" << endl;
}

Complex Complex::add(const Complex& other)
{
	Complex ret(this->real + other.real, this->imag + other.imag);
	return ret;
}

//int main()
//{
//	Complex c1(1, 2);
//	Complex c2(2, 3);
//	c1.add(c2).show();
//	
//	return 0;
//}