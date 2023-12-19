#include "M1.h"
int oddfact(int n)
{
	//项数     1    2     3      4         .... i
	//数列项   1    3     5      7         .... 2*i-1
	//累乘     1    1*3   1*3*5  1*3*5*7   .... 
	int multi = 1;
	for (int i = 1; i <= n; i++)
	{
		multi *= (2 * i - 1);
	}
	return multi;
}
int oddfactsum(int n)
{
	int sum = 1;
	for (int i = 2; i <= n; i++)
	{
		sum += (2 * i - 1);
	}
	return sum;
}