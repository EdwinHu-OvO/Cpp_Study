#include<iostream>
using namespace std;
void main()
{
	int a = 114513, b, c;
	b = ++a;
	cout << a << " " << b << endl;
	c = a++;
	cout << a << " " << c << endl;
	c = --a;
	cout << a << " " << c << endl;
	b = a++;
	b = --a;
	cout << a << " " << b << endl;
	system("pause");
}