#include<iostream>
using namespace std;
void main()
{
	int Arry[] = {34, 91, 83, 56, 29, 93, 56, 12, 88, 72 };
	int size = sizeof(Arry) / sizeof(int);
	for (int i = 0; i <= size-1; i++)
	{
		cout << Arry[i] << " " ;
	}
	cout << endl;
	for (int pass = 1; pass <= size - 1; pass++)
	{
		int flag = 0;
		for (int i = 0; i <= size - pass - 1; i++)
		{
			if (Arry[i] >= Arry[i + 1])
			{
				int temp = Arry[i];
				Arry[i] = Arry[i+1];
				Arry[i + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	for (int i = 0; i <= size-1; i++)
	{
		cout << Arry[i]<< " ";
	}
	system("pause");
}