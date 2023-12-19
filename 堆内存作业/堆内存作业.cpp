#include<iostream>
using namespace std;
void JudgeMem(double *);
void Function(double D[],int);
void main()
{
	int Asize = 20;
	double * D;
	D = (double *)malloc(sizeof(double)*Asize);
	JudgeMem(D);
	Function(D, Asize);
	free(D);
	cout << endl;
	D = new double[Asize];
	JudgeMem(D);
	Function(D, Asize);
	delete []D;
	system("pause");
}
void JudgeMem(double* D)
{
	if (D == NULL)
	{
		cout << "Can't get memory!\n";
		exit(-1);
	}
}
void Function(double D[], int Asize)
{
	for (int i = 0; i < Asize; i++)
	{
		if (i == 0)
		{
			D[i] = 1.5;
		}
		else
		{
			D[i] = D[i - 1] * 3 + 1.5;
		}
	}
	for (int i = 0; i < Asize; i++)
	{
		cout << *(D + i) << ",";
	}
}