#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//С������
	const int num = 30;
	int boy[num];
	int i;
	//��С�����
	for (i = 0; i < num; i++)
	{
		boy[i] = i + 1;
	}
	//���
	int m=4;
	i = -1;
	int n = num;      //δ�뿪��С������
	while (n > 1){
		//������m��С���뿪
		int j = 0;
		do
		{
			i = (i + 1) % num;
			if (boy[i] != 0)         //��С������������ԲȦ�е�Ԫ��
				j++;
		} while (j < m);
		//������С���뿪
		boy[i] = 0;
		n--;
	}
	//�������������ʤС��
	for (int i = 0; i < num; i++){
		if (boy[i] != 0) {
			cout << "\nNo." << boy[i] << "��ʤ.\n";
			break;
		}
	}
	system("pause");
	return 0;
}