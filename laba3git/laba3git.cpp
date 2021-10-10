#include <Windows.h>
#include <iostream>

using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c, d, min;
	cout << "Введите 4 целых положительных числа" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	min = 1000000;

	if ((a + b + c) < min) {
		min = a + b + c;
	}
	if ((a + b + d) < min) {
		min = a + b + d;
	}
	if ((b + c + d) < min) {
		min = b + c + d;
	}
	if ((a + c + d) < min) {
		min = a + c + d;
	}

	cout << "min =" << min << endl;

	return(0);

	system("pause");
}
