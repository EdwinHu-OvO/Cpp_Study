#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	//数列项i  1      2           3       4    ...  i
	//数列值pi 1.0/1  -1.0/3      1.0/5   -1.0/7...  1.0/i
	//数列和   1/1    s1+p2       s2+p3   s3+p4
	double pi4=1.0;
	int t=1,i=1;
	while (1)
	{
		i += 2;
		t *= -1;
		pi4 = pi4 + (1.0 / i) * t;
		if (1.0 / i <= 1e-09)
		{
			cout << setprecision(8) << pi4<< endl;
			break;
		}
	}
	//数列项i  1            2           3           ...  i
	//数列值pi 1/1-1/3      1/5-1.0/7   1/9-1/11    ...  1.0/i-1 - 1/i
	//数列和   1/1-1/3      s1+p2       s2+p3    
	double pi41 = 1.0 / 1 - 1.0 / 3;
	i = 2;
	while (1)
	{
		pi41 = pi41 + (1.0 / (2 * i + 1) - 1.0 / (2 * i + 3));
		//cout << setprecision(8) << pi41;
		if ((1.0 / (2 * i + 1) - 1.0 / (2 * i + 3)) <= 1e-8)
		{
			cout << setprecision(8) << pi41;
			break;
		}
		i += 2;
	}
system("pause");
}