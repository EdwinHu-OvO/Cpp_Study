#include<iostream>
using namespace std;
struct stu
{
	char name[50];
	double mathMid;
	double mathFinal;
	double _avg;
};
void avgmath(stu[] , int);
void bubble(stu* , int);
void printstudent(stu[], int);
int main()
{
	stu student[5]=
	{
		{ "Lihua",50,99 },
		{ "Zhangsan",66,50 },
		{"Lisi",100,20},
		{ "Lily", 0, 99 },
		{ "Wua", 5, 9 }
	};
	avgmath(student, 5);
	printstudent(student, 5);
	cout << endl;
	bubble(student, 5);
	printstudent(student, 5);
	return 0;
}
void printstudent(stu student[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << student[i].name << "  " << student[i].mathMid << "  " << student[i].mathFinal << "  " << student[i]._avg << endl;
	}
}
void avgmath(stu student[], int len)
{
	for (int i = 0; i < len; i++)
	{
		student[i]._avg = (student[i].mathFinal + student[i].mathMid) / 2;
	}
}
void bubble(stu* pst, int len)
{
	for (int pass = 1; pass <= len - 1; pass++)
	{
		int flag = 0;
		for (int i = 0; i <= len - pass - 1; i++)
		{
			if ((*(pst + i))._avg >= (*(pst + i +1))._avg)
			{
				stu temp = *(pst + i);
				*(pst + i) = *(pst + i+1);
				*(pst + i+1) = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}