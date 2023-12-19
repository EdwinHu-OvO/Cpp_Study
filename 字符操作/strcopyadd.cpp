#include<iostream>
using namespace std;
void strcy(char* source, char*dest);
void stradd(char* source, char*dest);
int strcomp(char* source, char*dest);
void main()
{
	char a[20] = "You are a ";
	char b[20] = "SB";
	char c[100];
	cout << "a: " << a << "b: " << b << endl;
	strcy(a, c);
	cout << c << endl;
	cout << "b is ";
	switch (strcomp(a, b))
	{
	case -1:
		{
			   cout << "shorter";
			   break;
		}
	case 0:
	{
			   cout << "same";
			   break;
	}
	case 1:
	{
			   cout << "longer";
			   break;
	}
	}
	cout << " than a.";
	stradd(a,b);
	cout << a << endl;
	system("pause");
}
void strcy(char* source, char*dest)
{
	while (*dest=*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
}
void stradd(char* source, char*dest)
{
	//source str + dest str
	while (*source)
	{
		source++;
	}
	strcy(dest, source);
}
int strcomp(char* source, char*dest)
{
	while (*source&&*dest&&(*source==*dest))
	{
		source++;
		dest++;
	}
	if (*dest == *source)
		return 0;
	else if (*dest > *source)
		return 1;
	else
		return -1;
}