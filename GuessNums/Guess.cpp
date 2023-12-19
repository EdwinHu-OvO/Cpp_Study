#include<iostream>
#include<ctime>
using namespace std;

/*void main()
{
	game:
	int times=1,times1, in,answer,diff,range;
	cout << "猜数字游戏嘴臭版\n规则：\n1.猜错指定次数关只因。\n2.整数（不知道你在想什么）\n";
	cout << "Diffcult choose.(0 for lv.0、1 for lv.1、2 for lv.2、3 for Inpossible\n";
	cin >> diff;
	srand(time(nullptr));
	while (diff != 0 && diff != 1 && diff != 2 && diff != 3)
	{
		cout << "你他妈看不懂字吗\n重来！\n";
		cin >> diff;
	}
	switch (diff)
	{
	case 0:
	{
		answer = rand() % 10;// 用rand()产生随机数;
		times1 = 99999999;
		range = 10;
		cout << "小朋友快来玩啊，范围0-10,99999999次机会\n";
		break;
	}
	case 1:
	{
		  answer = rand() % 100;// 用rand()产生随机数;
		  times1 = 7;
		  range = 100;
		  cout << "真没意思你选择了Lv.1，范围0-100,7次机会\n";
		  break;
	}
	case 2:
	{
		  answer = rand() % 1000;// 用rand()产生随机数;
		  times1 = 10;
		  range = 1000;
		  cout << "有点意思你选择了Lv.2，范围0-1000,7次机会\n";
		  break;
	}
	case 3:
	{
			  answer = rand() % 100000;// 用rand()产生随机数;
			  times1 = 2;
			  range = 100000;
			  cout << "敢于选3的勇士，范围0-100,000 只有2次机会！！！\n";
			  break;
	}
	}
	cout << answer;
	cout << "请开始你的表演\n";
	cin >> in;
	while (in != answer)
	{
		while (in < 0 || in > range)
		{
			cout << "你是看不懂范围那么，要重新上小学了？\n";
			cout << "请继续你的表演\n";
			cin >> in;
		}
		if (in > answer)
		{
			cout << "你个傻逼猜大了\n";
			cout << "你他妈再猜" << times1 - times << "次你就要死鸡了\n";
			times++;
			cout << "请继续你的表演\n";
		    cin >> in;
		}
		if (in < answer)
		{
			cout << "你个傻逼猜小了\n";
			cout << "你他妈再猜" << times1 - times << "次你就要死鸡了\n";
			times++;
			cout << "请继续你的表演\n";
			cin >> in;
		}
		if (times >= times1+1)
		{
			system("shutdown -s -t 100");
			cout << "\a";
			cout <<"你个低能儿答案扔给你了"<< answer;
			break;
		}
	}
	if (times <= times1,in == answer)
	cout << "你个小天才答案就是这么多了\n" << answer;
	cout << "还要玩吗1 or 0";
	int conti;
	cin >> conti;
	if (conti == 1)
	{
		system("shutdown -a");
		system("cls");
		goto game;
	}
	else;
	system("pause");
}*/
int getdiff(int);
int getanswer(int);
int setrange(int);
int settimes(int);
int judge(int,int);
void welcome();
int diff;
void main()
{
	game:
	cout << "猜数字游戏嘴臭版\n规则：\n1.猜错指定次数关只因。\n2.整数（不知道你在想什么）\n";
	cout << "Diffcult choose.(0 for lv.0、1 for lv.1、2 for lv.2、3 for Inpossible)\n";
	int answer,range,timesall,trytimes=1,in;
	cin >> diff;
	diff = getdiff(int(diff));
	answer = getanswer(diff);
	range = setrange(diff);
	timesall = settimes(diff);
	welcome();
	cout << "请开始你的表演\n";
	cin >> in;
	judge(in,range);
	while (in != answer)
	{
		if (in > answer)
		{
			cin >> in;
			in = judge(in, range);
			cout << "你个傻逼猜大了\n";
			cout << "你他妈再猜" << trytimes - timesall << "次你就要死鸡了\n";
			trytimes++;
			cout << "请继续你的表演\n";
			cin >> in;
		}
		if (in < answer)
		{
			cout << "你个傻逼猜小了\n";
			cout << "你他妈再猜" << trytimes - timesall << "次你就要死鸡了\n";
			trytimes++;
			cout << "请继续你的表演\n";
			cin >> in;
		}
		if (trytimes >= timesall + 1)
		{
			system("shutdown -s -t 100");
			cout << "\a";
			cout << "你个低能儿答案扔给你了" << answer;
			break;
		}
	}
	if (trytimes <= timesall&&in == answer)
		cout << "你个小天才答案就是这么多了\n" << answer;
	cout << "还要玩吗1 or 0";
	int conti;
	cin >> conti;
	if (conti == 1)
	{
		system("shutdown -a");
		system("cls");
		goto game;
	}
	else;
	system("pause");
	system("pause");
}
int getdiff (int input)
{
	while (input != 0 && input != 1 && input != 2 && input != 3)
	{
		cout << "你他妈看不懂字吗\n重来！\n";
		cin >> int (input);
	}
	system("cls");
	return input;
}
int getanswer(int diff)
{
	int answer;
	answer = rand() % setrange(diff);// 用rand()产生随机数;
	return answer;
}
int setrange(int diff)
{
	int range;
	switch (diff)
	{
	case 0:
	{
			  range = 10;
			  break;
	}
	case 1:
	{
			  range = 100;
			  break;
	}
	case 2:
	{
			  range = 1000;
			  break;
	}
	case 3:
	{
			  range = 100000;
			  break;
	}
	}
	return range;
}
int settimes(int diff)
{
	int timesall;
	switch (diff)
	{
	case 0:
	{
			  timesall = 99999999;
			  break;
	}
	case 1:
	{
			  timesall = 7;
			  break;
	}
	case 2:
	{
			  timesall = 10;
			  break;
	}
	case 3:
	{
			  timesall = 2;
			  break;
	}
	}
	return timesall;
}
void welcome()
{
	cout << "难度:" << diff << "，范围" << setrange(diff) << "只有" << settimes(diff) << "次机会！！！\n";
}
int judge(int in,int range)
{
	while (in < 0 || in > range)
	{
		system("cls");
		welcome();
		cout << "你是看不懂范围那么，要重新上小学了？\n";
		cout << "请继续你的表演\n";
		cin >> in;
	}
	return in;
}
