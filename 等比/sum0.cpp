#include"m1.h"
#include<iostream>
using namespace std;
int sum0(int n)
{
//项数i  1        2        3        4   ...      i
//数列值 2        a1*3-8   a2*3-8   a3*3-8...    ai-1 *3-8
//数列和 2        s1+a2    s2+a3    s3+a4  ....  si-1 +ai
long long i = 1, ap = 2, an, sn, sp = 2;
while (i<n)
{
i++;//控制项数
an = ap * 3-8;//an=an-1 * 3-8 ap为前一项
sn = sp + an;
sp = sn;
ap = an;//迭代将后一项作为前一项的值
}
return sn;
}
double aq(int a1, int n, double q)
{
	double an;
	an = a1;
	for (int i = 2; i <= n; i++)
	{
		an *= q;
	}
	return an;
}