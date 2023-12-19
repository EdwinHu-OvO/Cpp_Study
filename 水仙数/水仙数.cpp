#include <iostream>
#include <cmath>
using namespace std;
void main() 
{
	int i = 100, n1 ,n2, n3;
	while (i < 999)
	{
		n1 = i / 100;//百位数字
		n2 = i - n1 * 100;
		n2 /= 10;//十位数字
		n3 = i - n1 * 100 - n2 * 10;//个位数字
		if (i == pow(n1, 3) + pow(n2, 3) + pow(n3, 3))
		{
			cout << i << " ";
		}
		i++;
	}
	system("pause");
}
/*void main()
{
	int i = 100, n1=1, n2=0, n3=0,s1,s2,s3;
	while (n1 <= 9)
	{
		while (n2 <= 9)
		{
			while (n3 <= 9)
			{
				n3++;
				i++;
				s1 = pow(n3, 3);
				if (i == pow(s1, 3) + pow(s2, 3) + pow(s3, 3))
				{
					cout << i << " ";
				}
			}
			n3 = 0;
			n2++;
			i++;
			s2 = pow(n2, 3);
			if (i == pow(s1, 3) + pow(s2, 3) + pow(s3, 3))
			{
				cout << i << " ";
			}
		}
		n2 = 0;
		n1++;
		i++;
		s3 = pow(n1, 3);
		if (i == pow(s1, 3) + pow(s2, 3) + pow(s3, 3))
		{
			cout << i << " ";
		}
	}

	cout << n1 << endl << n2 << endl << n3 << endl << i;

	system("pause");
}*/