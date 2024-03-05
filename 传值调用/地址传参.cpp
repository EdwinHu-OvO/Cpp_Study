#include<iostream>
#include<iomanip>
using namespace std;
void myswap1(int*, int*);
void myswap2(int*, int*);
void main()
{
	int a = 114, b = 514;
	cout << "Before:" << a << b;
	myswap1(&a, &b);
	cout << "after:" << a << b;
	myswap2(&a, &b);
	cout << "after:" << a << b;
	system("pause");
}
void myswap1(int* x, int* y)
{
	int temp = *y;
	*y = *x;
	*x = temp;
}
void myswap2(int* x, int* y)
{
	int* temp;
	temp = x;
	x = y;
	y = temp;
}