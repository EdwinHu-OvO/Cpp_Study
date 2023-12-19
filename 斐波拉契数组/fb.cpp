#include<iostream>
using namespace std;
void main()
{
	int fb[30];
	fb[0] = 0;
	fb[1] = 1;
	for (int i = 2; i <= 29; i++)
	{
		fb[i] = fb[i - 1] + fb[i - 2];
	}
	cout << fb[29];
	system("pause");
}