#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
void main() {
	/*char sb = getchar();
	if (sb == 'b'){
		cout << '\a' << "woa!";
	}
	*/
	/*if (char sb = (getchar()) == 'b'){
		cout << '\a' << "woa!";
	}*/
	for (int i = 1; i <= 5; i++){
		std::this_thread::sleep_for(std::chrono::seconds(1));
		cout << '\a';
	}
	system("pause");
	system("shutdown -s -t 10");
	cout << "\a�������ˣ��������10�����������������ĵ��Խ���ػ���\n";
	cout << "�����sin��x��/x��x����0�ļ���\n";
	int ans;
	cin >> ans;
	if (ans == 1)
	{
		system("shutdown -a");
	}
	else
	{
		system("shutdown -s -t 0");
	}
}