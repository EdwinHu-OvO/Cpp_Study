#include<iostream>
using namespace std;
double a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
short b[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
void main()
{
	cout << sizeof (a) / sizeof (double) << endl;
	cout << sizeof (b) / sizeof (short);
	a[5] = 2312.05;
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	for (int i = 0; i < sizeof (b) / sizeof (short); i++)
	{
		cout << b[i] << endl;
	}
	system("pause");
}