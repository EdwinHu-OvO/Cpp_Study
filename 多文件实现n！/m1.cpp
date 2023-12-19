#include<iostream>
#include"m1.h"
using namespace std;
long long fact_dowhile(int i)
{
	long long a = 1;
	int j = 1;
	do
	{
		a *= j;
		j++;
	} while (j <= i);
	return a;
}
long long fact_while(int i)
{
	long long a = 1;
	int j = 1;
	while (j <= i)
	{
		a *= j;
		j++;
	}
	return a;
}
long long fact_for(int i)
{
	//阶乘函数
	long long a = 1;
	for (int j = 1; j <= i; j++)
	{
		a *= j;
	}
	return a;
}
long long fact_recursion(int i)
{
	//递推公式 1 * 2 *3 *4 .... i-1 * i
	//最小规模 n = 1 fact_recursion(1) = 1
	if (i == 1)
	{
		return 1;
	}
	else return fact_recursion(i - 1) * i;
}