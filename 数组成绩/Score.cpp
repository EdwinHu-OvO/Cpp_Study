#include<iostream>
using namespace std;
void main()
{
	double score[5] = { 50, 99,85,100,40};
	int size = sizeof(score) / sizeof(double);
	//�������
	for (int i = 0; i < size; i++)
	{
		cout << score[i] << ",";
	}
	//���Ҳ������ͳɼ������±�����ֵ��
	int min = score[0],num =0;
	for (int i = 1; i < size; i++)
	{
		if (score[i] < min)
		{
			min = score[i];
			num = i;
		}
	}
	cout <<"��ͳɼ�"<< min << "�±�����ֵ"<<num;
	//���㲢���ƽ���ɼ���
	int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += score[i];
	}
	cout <<"ƽ���ɼ�"<< sum / size;
	system("pause");
}