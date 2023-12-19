#include<iostream>
#include"m1.h"
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << fact_dowhile(n) << endl << fact_for(n) << endl << fact_recursion(n) << endl << fact_while(n);
	system("pause");
	return 0;
}