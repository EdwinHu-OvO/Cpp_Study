#include"m1.h"
#include<iostream>
using namespace std;
int sum0(int n)
{
//����i  1        2        3        4   ...      i
//����ֵ 2        a1*3-8   a2*3-8   a3*3-8...    ai-1 *3-8
//���к� 2        s1+a2    s2+a3    s3+a4  ....  si-1 +ai
long long i = 1, ap = 2, an, sn, sp = 2;
while (i<n)
{
i++;//��������
an = ap * 3-8;//an=an-1 * 3-8 apΪǰһ��
sn = sp + an;
sp = sn;
ap = an;//��������һ����Ϊǰһ���ֵ
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