#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//小孩数组
	const int num = 30;
	int boy[num];
	int i;
	//给小孩编号
	for (i = 0; i < num; i++)
	{
		boy[i] = i + 1;
	}
	//间隔
	int m=4;
	i = -1;
	int n = num;      //未离开的小孩个数
	while (n > 1){
		//数到第m个小孩离开
		int j = 0;
		do
		{
			i = (i + 1) % num;
			if (boy[i] != 0)         //数小孩，跳过不在圆圈中的元素
				j++;
		} while (j < m);
		//数到的小孩离开
		boy[i] = 0;
		n--;
	}
	//从数组中输出获胜小孩
	for (int i = 0; i < num; i++){
		if (boy[i] != 0) {
			cout << "\nNo." << boy[i] << "获胜.\n";
			break;
		}
	}
	system("pause");
	return 0;
}