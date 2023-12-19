#include<iostream>
using namespace std;
void main()
{
	unsigned long long an[100];
	an[0] = 2;
	for (int i = 1; i < 100; i++)
	{
		an[i] = an[i - 1] * 3 + 7;
	}
	cout << an[0];
	for (int i = 1; i <= 10; i++)
	{
		cout << an[10 * i - 1]<<" ";
	}
	system("pause");
}