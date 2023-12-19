#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void main()
{
	char wenan[50], potography[50], accu[50];
	cout << "推文文末生成器v0.1r cpp edition\n";
	cout << "没有的部分请q!\n";
	cout << "文案（撰稿人名字或者部门）：";
	cin.getline(wenan, 50);
	cout << "图片：";
	cin.getline(potography, 50);
	cout << "校对：";
	cin.getline(accu, 50);
	system("cls");
	if(strcmp(wenan,"q"))
	{
		cout << "文案 | " << wenan << endl;
	}
	else;
	cout << "排版 | 胡懿德\n";
	if(strcmp(potography, "q"))
	{
		cout << "图片 | 龙雪 " << potography << endl;
	}
	else;
	if (strcmp(accu, "q"))
	{
		cout << "校对 | " << accu << endl;
	}
	else;
	cout << "责任编辑 | 王以诺\n执行编辑 | 覃韵怡\n指导老师 | 泮凯\n审核 | 张欢\n";
	system("pause");
}
