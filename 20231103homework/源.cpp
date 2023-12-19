#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	unsigned int x = -10;
	cout << "hex:" << hex << x << "," << dec << x << endl;
	signed int y;
	y = (signed int)x;
	cout << "hex:" << hex << y << "," << dec << y << endl;
	system("pause");
}