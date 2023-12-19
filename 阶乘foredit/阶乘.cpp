#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;
void main()
{
	//数列项i 1   1*2       1*2*3        1*2*3*4 ....         1*2*3*4...10
	//数列和  1   1+1*2     1+1*2+1*2*3  1+1*2+1*2*3+1*2*3*4
	long long nj=1,sn=1;
	for (int i = 1; i <= 10; i++)
	{
		nj *= i;
		sn += nj;
	}
	cout << nj << "," << sn << endl;
	nj = 1, sn = 1;
	for (int i = 1; i <= 10; i++)
	{
		nj = 1;
		for (int j = 1; j <= i; j++)
		{
			nj *= j;
		}
		sn += nj;
	}
	cout << nj << "," << sn;
	system("pause");
}
