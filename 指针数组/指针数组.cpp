#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	char ch[] = "114";
	char* charip[] = { "114514", "1919810", "ºßºßºß", "°¡°¡°¡°¡","\a" ,ch};
	for (int i = 0; i < sizeof(charip) / sizeof(char*); i++)
	{
		cout << charip[i] << endl;
		cout << *(charip + i) << endl;
	}
	system("pause");
}
