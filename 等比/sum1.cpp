#include"m1.h"
int sum1(int n)
{
	//项数i  1        2        3        4   ...      i
	//数列值 2        a1*3-8   a2*3-8   a3*3-8...    ai-1 *3-8
	//数列和 2        s1+a2    s2+a3    s3+a4  ....  si-1 +ai
	long long i = 1, an = 2, sn = 2;
	while (i<n)
	{
		i++;//控制项数
		an = an * 3 - 8;//an=an-1 * 3-8 ap为前一项
		sn = sn + an;
	}
	return sn;
}