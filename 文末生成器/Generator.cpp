#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void main()
{
	char wenan[50], potography[50], accu[50];
	cout << "������ĩ������v0.1r cpp edition\n";
	cout << "û�еĲ�����q!\n";
	cout << "�İ���׫�������ֻ��߲��ţ���";
	cin.getline(wenan, 50);
	cout << "ͼƬ��";
	cin.getline(potography, 50);
	cout << "У�ԣ�";
	cin.getline(accu, 50);
	system("cls");
	if(strcmp(wenan,"q"))
	{
		cout << "�İ� | " << wenan << endl;
	}
	else;
	cout << "�Ű� | ��ܲ��\n";
	if(strcmp(potography, "q"))
	{
		cout << "ͼƬ | ��ѩ " << potography << endl;
	}
	else;
	if (strcmp(accu, "q"))
	{
		cout << "У�� | " << accu << endl;
	}
	else;
	cout << "���α༭ | ����ŵ\nִ�б༭ | ������\nָ����ʦ | ����\n��� | �Ż�\n";
	system("pause");
}
