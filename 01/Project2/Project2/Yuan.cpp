#include <iostream>

using namespace std;
#define PI 3.14

class Circle
{
public:
	int r;
	double calculate()
	{
		return 2 * PI * r;
	}


};

class Student
{
public:
	string name_m;
	int num_m;
	void setName(string name)
	{
		name_m = name;
	}

	void setNumber(int num)
	{
		num_m = num;
	}

	void printStudent()
	{
		cout << "Ñ§ºÅ:" << num_m << endl;
		cout << "ÐÕÃû:" << name_m << endl;
	}

};



int main()
{
//	circle c1;
//	c1.r = 10;
//	cout << "cal" << c1.calculate() << endl;
	Student st1;
	st1.name_m = "wwz";
	st1.num_m = 1;
	st1.printStudent();
	st1.setName("lisi");
	st1.setNumber(2);
	st1.printStudent();

}