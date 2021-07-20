#pragma once

using namespace std;

class Complex
{
public:
	void set(double r, double i)
	{
		real = r;
		imag = i;
	}

	Complex();

	Complex(double r = 0, double i = 0);

	Complex(const Complex& other);

	~Complex();

	void show()
	{
		cout << real << "+" << imag << "i" << endl;
	}

	Complex add(const Complex &other);
private:
	double real;
	double imag;
};