#include <iostream>
using namespace std;
long long oddfun(int);
void main(){
	int n;
	cin >> n;
	cout << oddfun(n);
	system("pause");
}
long long oddfun(int i)
{
	//���ƹ�ʽ 1 * 3 *5 *7 .... 2i-1 * 2i +1
	//��С��ģ n = 1 oddfun(1) = 1
	if (i == 1)
	{
		return 1;
	}
	else return oddfun (i - 1) * (2 * i - 1); 
}