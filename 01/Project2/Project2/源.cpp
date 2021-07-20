#include <iostream>
#include <stdio.h>

using namespace std;


int& test01()
{
	int a = 10;
	return a;
}

int main1()
{

	int& ref = test01();

	cout << ref << endl;
	cout << ref << endl;

	//printf("%p\n", ref);

	//cout << "hello world!" << endl;
	system("pause");
	return 0;
}