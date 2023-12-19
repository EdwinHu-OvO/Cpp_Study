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
	cout << "\a你中招了，你必须在10秒内算出这个题否则你的电脑将会关机！\n";
	cout << "请求出sin（x）/x在x趋于0的极限\n";
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