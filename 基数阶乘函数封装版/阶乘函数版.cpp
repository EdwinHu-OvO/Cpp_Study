#include<iostream>
using namespace std;
long long fact(int);
long long oddfactsum(int);
int main()
{
	int n;
	cin >> n;
	cout << oddfactsum(n);
	system("pause");
	return 0;
}
long long fact(int i)
{
	//½×³Ëº¯Êý
	long long a = 1;
	for (int j=1; j <= i; j++)
	{
		a *= j;
	}
	return a;
}
long long oddfactsum(int i)
{
	long long a = 0;
	for (int j=1; j <= i; j++)
	{
		a += fact(j);
	}
	return a;
}