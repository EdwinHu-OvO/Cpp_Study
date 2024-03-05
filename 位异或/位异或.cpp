#include<iostream>
using namespace std;
int main()
{
	int a = 5,b=6;
	cout << a << b;
	a = a^b;
	b = b^a;//b=b^b^a
	a = a^b;
	cout << a << b;
	return 0;
}