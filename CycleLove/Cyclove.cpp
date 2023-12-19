#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;
void main()
{
	double dur;
	clock_t start, end;
	long long a;
	long long i = 1;
	cout << "你要我说多少次？";
	cin >> a;
	start = clock();
	while (i <= a)
	{
		if (i % 2 != 0)
		{
			Sleep (1000);
			cout << i << "Times  " << "I Love You.\n\a" << "还有" << a - i << endl;
			i++;
		}
		else
		{
			Sleep(1000);
			cout << i << "Times  " << "I Hate You.\n\a" << "还有" << a - i << endl;
			i++;
		}
	}
	end = clock();
	dur = (double)(end - start);
	system("cls");
	cout << "Use Time:\n" << (dur / 1000) << "s\n";
	cout << "I really love you!!!!!!!\n";
	system("pause");
}