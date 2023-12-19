//此程序用于将输入的两个整数，做乘并输出
#include<iostream>
using namespace std;
void main()
{
	int a, b, result;
	cout << "请输入两个整数\n";
	cin >> a >> b;
	result = a * b;
	cout << "两个数的乘积是：" << result << endl;
	system("pause");
}