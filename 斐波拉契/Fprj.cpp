#include<iostream>
using namespace std;
int FBLQ(int);
void main()
{
	int n;
	cin >> n;
	cout << FBLQ(n);
	system("pause");
}
int FBLQ(int n)
{
	int f=0;
	if (n==1)
	{
		return 0;
	}
	else if (n==2)
	{
		return 1;
	}
	return FBLQ(n - 1) + FBLQ(n - 2);
}