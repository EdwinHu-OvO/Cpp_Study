#include<iostream>
using namespace std;
/*void main()
{
	int a;
	while (1)
	{
		cin >> a;
		switch(a / 10)
		{
		case 0:
			cout << "我踩一脚都比你高\n";
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			cout << "E\n";
			break;
		case 6:
			cout << "D\n";
			break;
		case 7:
			cout << "C\n";
			break;
		case 8:
			cout << "B\n";
			break;
		case 9:
		case 10:
			cout << "A\n";
			break;
		default:
			if (a == 114514)
			{
				cout << "哼啊啊啊啊\n";
			}
			else
				cout << "哥们这是100分制的\n";
		break;
		}
	}
	
	system("pause");
}*/
void main()
{
	int a;
	while (1)
	{
		cin >> a;
		if (a / 10 < 6 && a >= 0)
		{
			cout << "E\n";
		}
		else if (a / 10 < 7 && a >= 6)
		{
			cout << "D\n";
		}
		else if (a / 10 < 8 && a >= 7)
		{
			cout << "C\n";
		}
		else if (a / 10 < 9 && a >= 8)
		{
			cout << "B\n";
		}
		else if (a / 10 <= 9 && a > 8)
		{
			cout << "A\n";
		}
		else if (a == 100)
		{
			cout << "A\n";
		}
		else
		{
			cout << "哥们这是100分制的\n";
		}
	}
	system("pause");
}
