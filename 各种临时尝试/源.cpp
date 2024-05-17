#include<iostream>
#include<string.h>
using namespace std;

static char* f1(int c){
	char a[] = "augidfaiwuh";
	char b[] = "avbduiabi";
	char* m;
	if (c < 6) {
		m = a;
		//cout << m << endl;
	}
	else {
		m = b;
		cout << m << endl;
	}
	return m;
}

void main() {
	cout << f1(8);
}