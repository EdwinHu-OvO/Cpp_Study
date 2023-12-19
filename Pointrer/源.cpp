#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	int sum = 0;
	int *ip1 = a;
	cout << *(ip1 + 1);
	for (int* ip = a; ip <= a+9; ip++)
	{
		cout << *ip << " ";
		sum += *ip;
	}
	cout << sum;
	system("pause");
}