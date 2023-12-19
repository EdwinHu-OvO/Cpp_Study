#include <iostream>
#include<time.h>
using namespace std;
void main() {
	while (1)
	{
		cout << "输入一个数来判断它是否为质数\n";
		clock_t ts, te;
		double dur;
		char homo;
		long long a, i = 1, b = 0;
		cin >> a;
		cout << "Continue? y or n\n";
		cin >> homo;
		ts = clock();
		if (homo == 'n')
		{
			break;
		}
		for (; i <= a; i++)
		{
			if (a%i == 0)
			{
				b++;//Count the 因数
			}
			if (a%i != 0)
			{
				continue;//Output约数
			}
			cout << i << " ";
		}
		te = clock();
		cout << "\n是否是质数:\n";
		bool o=0;
		b != 0 ? o = 1 : o;
		cout << boolalpha << o<<endl;
		dur = te - ts;
		cout << "有" << b << "个约数\nTime:"<< dur/1000 << "s" ;//1 and itself
		system("pause");
		system("cls");
	}
}