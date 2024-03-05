#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	const int * const ip = &a;
	int * ip2 = (int *)ip;
	*ip2 = 2;
	//*ip = 1;
	return 0;
}