#include<iostream>
#include<ctime>
using namespace std;

/*void main()
{
	game:
	int times=1,times1, in,answer,diff,range;
	cout << "��������Ϸ�����\n����\n1.�´�ָ��������ֻ��\n2.��������֪��������ʲô��\n";
	cout << "Diffcult choose.(0 for lv.0��1 for lv.1��2 for lv.2��3 for Inpossible\n";
	cin >> diff;
	srand(time(nullptr));
	while (diff != 0 && diff != 1 && diff != 2 && diff != 3)
	{
		cout << "�����迴��������\n������\n";
		cin >> diff;
	}
	switch (diff)
	{
	case 0:
	{
		answer = rand() % 10;// ��rand()���������;
		times1 = 99999999;
		range = 10;
		cout << "С���ѿ����氡����Χ0-10,99999999�λ���\n";
		break;
	}
	case 1:
	{
		  answer = rand() % 100;// ��rand()���������;
		  times1 = 7;
		  range = 100;
		  cout << "��û��˼��ѡ����Lv.1����Χ0-100,7�λ���\n";
		  break;
	}
	case 2:
	{
		  answer = rand() % 1000;// ��rand()���������;
		  times1 = 10;
		  range = 1000;
		  cout << "�е���˼��ѡ����Lv.2����Χ0-1000,7�λ���\n";
		  break;
	}
	case 3:
	{
			  answer = rand() % 100000;// ��rand()���������;
			  times1 = 2;
			  range = 100000;
			  cout << "����ѡ3����ʿ����Χ0-100,000 ֻ��2�λ��ᣡ����\n";
			  break;
	}
	}
	cout << answer;
	cout << "�뿪ʼ��ı���\n";
	cin >> in;
	while (in != answer)
	{
		while (in < 0 || in > range)
		{
			cout << "���ǿ�������Χ��ô��Ҫ������Сѧ�ˣ�\n";
			cout << "�������ı���\n";
			cin >> in;
		}
		if (in > answer)
		{
			cout << "���ɵ�Ʋ´���\n";
			cout << "�������ٲ�" << times1 - times << "�����Ҫ������\n";
			times++;
			cout << "�������ı���\n";
		    cin >> in;
		}
		if (in < answer)
		{
			cout << "���ɵ�Ʋ�С��\n";
			cout << "�������ٲ�" << times1 - times << "�����Ҫ������\n";
			times++;
			cout << "�������ı���\n";
			cin >> in;
		}
		if (times >= times1+1)
		{
			system("shutdown -s -t 100");
			cout << "\a";
			cout <<"������ܶ����Ӹ�����"<< answer;
			break;
		}
	}
	if (times <= times1,in == answer)
	cout << "���С��Ŵ𰸾�����ô����\n" << answer;
	cout << "��Ҫ����1 or 0";
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
	cout << "��������Ϸ�����\n����\n1.�´�ָ��������ֻ��\n2.��������֪��������ʲô��\n";
	cout << "Diffcult choose.(0 for lv.0��1 for lv.1��2 for lv.2��3 for Inpossible)\n";
	int answer,range,timesall,trytimes=1,in;
	cin >> diff;
	diff = getdiff(int(diff));
	answer = getanswer(diff);
	range = setrange(diff);
	timesall = settimes(diff);
	welcome();
	cout << "�뿪ʼ��ı���\n";
	cin >> in;
	judge(in,range);
	while (in != answer)
	{
		if (in > answer)
		{
			cin >> in;
			in = judge(in, range);
			cout << "���ɵ�Ʋ´���\n";
			cout << "�������ٲ�" << trytimes - timesall << "�����Ҫ������\n";
			trytimes++;
			cout << "�������ı���\n";
			cin >> in;
		}
		if (in < answer)
		{
			cout << "���ɵ�Ʋ�С��\n";
			cout << "�������ٲ�" << trytimes - timesall << "�����Ҫ������\n";
			trytimes++;
			cout << "�������ı���\n";
			cin >> in;
		}
		if (trytimes >= timesall + 1)
		{
			system("shutdown -s -t 100");
			cout << "\a";
			cout << "������ܶ����Ӹ�����" << answer;
			break;
		}
	}
	if (trytimes <= timesall&&in == answer)
		cout << "���С��Ŵ𰸾�����ô����\n" << answer;
	cout << "��Ҫ����1 or 0";
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
		cout << "�����迴��������\n������\n";
		cin >> int (input);
	}
	system("cls");
	return input;
}
int getanswer(int diff)
{
	int answer;
	answer = rand() % setrange(diff);// ��rand()���������;
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
	cout << "�Ѷ�:" << diff << "����Χ" << setrange(diff) << "ֻ��" << settimes(diff) << "�λ��ᣡ����\n";
}
int judge(int in,int range)
{
	while (in < 0 || in > range)
	{
		system("cls");
		welcome();
		cout << "���ǿ�������Χ��ô��Ҫ������Сѧ�ˣ�\n";
		cout << "�������ı���\n";
		cin >> in;
	}
	return in;
}
