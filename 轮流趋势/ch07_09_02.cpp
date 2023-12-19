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
		boy[i] = i + 1;


	//输入数小孩间隔
	int m;               //Josephus问题中的间隔m
	cout << "please input the interval: ";
	cin >> m;
	//输出初始状态
	for (int i = 0; i < numOfBoy; i++)     //顺序输出开始时的小孩编号
		cout << boy[i] << "，";
	cout << endl;


	//************************ 构建josephus问题算法:小孩依次离开*************************
	//*******************************************************************************
	i = -1;                //当前位置i设置为第一个小孩
	int n = numOfBoy;      //未离开的小孩个数
	while (n > 1){
		//数到第m个小孩离开
		int j = 0;
		do
		{
			i = (i + 1) % numOfBoy;
			if (boy[i] != 0)         //数小孩，跳过不在圆圈中的元素
				j++;
			
		} while (j < m);   // 数到第m个小孩


		//数到的小孩离开
		cout << boy[i] << "，";   //输出离开的小孩之编号
		boy[i] = 0;              //标识该小孩已离开

		n--;                     //剩余小孩数减1
	}


	//************************ 宣布获胜的小孩******************************************
	//*******************************************************************************

	//从数组中输出获胜小孩
	for (int i = 0; i < numOfBoy; i++){
		if (boy[i] != 0) {
			cout << "\nNo." << boy[i] << "获胜.\n";   //输出胜利者
			break;
		}
	}

	system("pause");
	return 0;
}