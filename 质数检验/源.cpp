#include <iostream>
#include<time.h>
using namespace std;
void main() {
	while (1)
	{
		cout << "����һ�������ж����Ƿ�Ϊ����\n";
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
				b++;//Count the ����
			}
			if (a%i != 0)
			{
				continue;//OutputԼ��
			}
			cout << i << " ";
		}
		te = clock();
		cout << "\n�Ƿ�������:\n";
		bool o=0;
		b != 0 ? o = 1 : o;
		cout << boolalpha << o<<endl;
		dur = te - ts;
		cout << "��" << b << "��Լ��\nTime:"<< dur/1000 << "s" ;//1 and itself
		system("pause");
		system("cls");
	}
}