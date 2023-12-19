#include<iostream>
using namespace std;
void main()
{
	double score[5] = { 50, 99,85,100,40};
	int size = sizeof(score) / sizeof(double);
	//遍历输出
	for (int i = 0; i < size; i++)
	{
		cout << score[i] << ",";
	}
	//查找并输出最低成绩和其下标索引值；
	int min = score[0],num =0;
	for (int i = 1; i < size; i++)
	{
		if (score[i] < min)
		{
			min = score[i];
			num = i;
		}
	}
	cout <<"最低成绩"<< min << "下标索引值"<<num;
	//计算并输出平均成绩。
	int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += score[i];
	}
	cout <<"平均成绩"<< sum / size;
	system("pause");
}