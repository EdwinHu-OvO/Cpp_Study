#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	unsigned short us = 65535;
	signed short ss = -1;
	long l;
	l = us;
	cout << "unsigned long :";
	cout << setw(8) << setfill('*') << hex << l << "," << setw(8) << dec << l << endl;
	l = ss;
	cout << "signed long :";
	cout << setw(8) << hex << setfill('*') << l << "," << setw(8) << dec << l << endl;
	system("pause");
}