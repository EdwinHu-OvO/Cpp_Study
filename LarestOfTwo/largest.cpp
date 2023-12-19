#include<iostream>
using namespace std;
void main()
{
	int a, b;
	for (int i = 1;; i++)
	{
	cout << "输入两个值";
	cin >> a >> b;
	if (a > b)
	{
	cout << a << endl;
	}
	else
	{
	cout << b << endl;
	}
	}
	system("pause");
}