#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	unsigned long long n;
	const int min = 60, hour = 3600, day = 86400, week = 604800, year = 31449600;

	cout << "Введите время в секундах: ";
	cin >> n;

	if ((n / year) != 0) { cout << "Лет: " << n / year << endl; n = n % year; }
	if ((n / week) != 0) { cout << "Недель: " << n / week << endl; n = n % week; }
	if ((n / day) != 0) { cout << "Дней: " << n / day << endl; n = n % day; }
	if ((n / hour) != 0) { cout << "Часов: " << n / hour << endl; n = n % hour; }
	if ((n / min) != 0) { cout << "Минут: " << n / min << endl; n = n % min; }
	if (n != 0) { cout << "Секунд: " << n << endl; }

	system("pause");
	return(0);
}