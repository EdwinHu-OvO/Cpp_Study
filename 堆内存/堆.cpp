#include<iostream>
using namespace std;
int sum(double[], int);
int* CreatArry(int);
void main()
{
	int Asize;
	double * A;
	cout << "How large shit you want?\n";
	cin >> Asize;
	//A = (double *)malloc(Asize*sizeof(double));
	A = new double[Asize];
	if (A == NULL)
	{
		cout << "ɵ���ڴ治�������shit�ˣ�\n";
		exit(-1);
	}
	for (int i = 0; i < Asize; i++)
	{
		A[i] = i*1.0;
	}
	cout << sum(A, Asize)<<endl;
	/*for (int i = 0; i < Asize; i++)
	{
		cout << A[i] << ",";
	}*/
	//free(A);
	delete[]A;
	cout << "How large another shit you want?\n";
	cin >> Asize;
	int* B=CreatArry(Asize);
	if (B == NULL)
	{
		cout << "ɵ���ڴ治�������shit�ˣ�\n";
		exit(-1);
	}
	for (int i = 0; i < Asize; i++)
	{
		cout << B[i] << ",";
	}
	delete[]B;
	system("pause");
}
int sum(double* d, int len)
{
	double sum=0;
	for (int i = 0; i < len; i++)
	{
		//sum += d[i];
		sum += *(d + i);
	}
	return sum;
}
int* CreatArry(int n)
{
	int * Arry;
	Arry = new int[n];
	for (int i = 0; i < n; i++)
	{
		Arry[i] = i+1;
	}
	return Arry;
}