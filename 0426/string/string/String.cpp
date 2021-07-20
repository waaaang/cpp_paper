#include <iostream>
#include "String.h"

int main()
{
	String s1("hello");
	String s2("world");

	String s3(s2);

	cout << s1 << endl;

	s3 = s1;
	cout << s3 << endl;
	cout << s2 << endl;
	return 0;
}
