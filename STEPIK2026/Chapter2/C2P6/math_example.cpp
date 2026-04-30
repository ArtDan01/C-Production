#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main() {
	double x, y;
	setlocale(LC_ALL,"rus");
	cout << "Введите аргумент: ";
	cin >> x;
	y = sqrt(2.) / 2 * sin(x / 2);
	cout << "Результат функции: " << y << "\n";
	system("pause");
	return 0;
}

