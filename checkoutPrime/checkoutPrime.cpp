#include<iostream>
using namespace std;
void checkoutPrime(int, int);
void main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	checkoutPrime(a, b);
	system("pause");
}
void checkoutPrime(int m, int M)
{
	for (int j = m; j <= M; j++)
	{
		for (int n = 0, i = 1; i <= j; i++)
		{
			if (j%i == 0 && i != 1 && i != j)
			{
				n++;
				break;
			}
			if (n == 0 && i == j - 1 )
			{
				cout << j << " ";
			}
		}
	}
}