#include<iostream>
#include<iomanip>
using namespace std;
void scoreM(int A[5][4]);
void avg(int A[5][4]);
void fail(int A[5][4]);
void main()
{
	/*    高数   英语   结构化程序设计    大学物理
	   1  85     90     90                80
	   2  99     95     100               75
	   3  60     55     85                60
	   4  75     60     95                88
	   5  85     85     60                76
	*/
	int A[5][4] = {
		{85,90,90,80},
		{99,95,100,75},
		{60,55,85,60},
		{75,60,95,88},
		{85,85,60,76}
	};
	//第3个学生的平均成绩。
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += A[2][i];
	}
	cout << sum / 4 << endl;
	//编程基础I课程的平均成绩
	sum = 0;
	for (int j = 0; j < 5; j++)
	{
		sum += A[j][2];
	}
	cout << sum / 5 << endl;
	scoreM (A);
	fail(A);
	avg(A);
	/*for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
	{
		for (int j = 0; j < sizeof(A[0]) / sizeof(int); j++)
		{
			cout <<setw(2)<< A[i][j];
			if (j < sizeof(A[0]) / sizeof(int)-1)
				cout << ",";
		}
		cout << endl;
	}
	for (int i = 0; i <sizeof(A[0]) / sizeof(int); i++)
	{
		for (int j = 0; j <  sizeof(A) / sizeof(A[0]); j++)
		{
			cout << setw(2) << A[j][i];
			if (j <  sizeof(A) / sizeof(A[0])-1)
				cout << ",";
		}
		cout << endl;
	}*/
	system("pause");
}
//找出成绩最高的学生序号和课程。
void scoreM(int A[5][4])
{
	int max = A[0][0], stu = 0,course = 0 ;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j<4; j++)
		{
			if (A[i][j] > max)
			{
				max = A[i][j];
				stu = i;
				course = j;
			}
		}
	}
	cout << "最高成绩学生" << stu+1 << "课程" << course+1<< endl;
}
//找出不及格课程的学生序号及其各门课的全部成绩。
void fail(int A[5][4])
{
	int stu = 0, course = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j<4; j++)
		{
			if (A[i][j] < 60)
			{
				cout << "不及格课程的学生序号" << i + 1<<"其各门课的全部成绩"<<endl;
				for (int k = 0; k < 4; k++)
				{
					cout << A[i][k]<< " ";
				}
			}
		}
	}
	cout << "最高成绩学生" << stu + 1 << "课程" << course + 1 << endl;
}
//求全部学生各门课程的平均分数，并输出。
void avg(int A[5][4])
{
	int avg[5] = {0,0,0,0,0};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			avg[i] += A[i][j];
		}
		avg[i] /= 4;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << avg[i]<< " " ;
	}
}