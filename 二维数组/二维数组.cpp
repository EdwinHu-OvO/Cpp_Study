#include<iostream>
#include<iomanip>
using namespace std;
void scoreM(int A[5][4]);
void avg(int A[5][4]);
void fail(int A[5][4]);
void main()
{
	/*    ����   Ӣ��   �ṹ���������    ��ѧ����
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
	//��3��ѧ����ƽ���ɼ���
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += A[2][i];
	}
	cout << sum / 4 << endl;
	//��̻���I�γ̵�ƽ���ɼ�
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
//�ҳ��ɼ���ߵ�ѧ����źͿγ̡�
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
	cout << "��߳ɼ�ѧ��" << stu+1 << "�γ�" << course+1<< endl;
}
//�ҳ�������γ̵�ѧ����ż�����ſε�ȫ���ɼ���
void fail(int A[5][4])
{
	int stu = 0, course = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j<4; j++)
		{
			if (A[i][j] < 60)
			{
				cout << "������γ̵�ѧ�����" << i + 1<<"����ſε�ȫ���ɼ�"<<endl;
				for (int k = 0; k < 4; k++)
				{
					cout << A[i][k]<< " ";
				}
			}
		}
	}
	cout << "��߳ɼ�ѧ��" << stu + 1 << "�γ�" << course + 1 << endl;
}
//��ȫ��ѧ�����ſγ̵�ƽ���������������
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