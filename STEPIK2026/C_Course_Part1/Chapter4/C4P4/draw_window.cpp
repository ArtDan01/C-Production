#include <iostream>
using namespace std;
/*
! Пример подсветок
* Положительно
? Вопросительно
TODO отметка что сделаем что-то скоро
* @param
*/
int main() {
	setlocale(LC_ALL, "rus");
	int h, l;
	cout << "Введите ширину прямоугольника: ";
	cin >> l;
	cout << "Введите высоту прямоугольника: ";
	cin >> h;
	for (int i = 1; i <= h; i++) { // i – номер строки
		for (int j = 1; j <= l; j++) { //j – номер звездочки в строке
            if((i >=2 && i <= h - 1) && (j >=2 && j <= l - 1)){
                cout << ' ';
            } else {cout << '*';}
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}
