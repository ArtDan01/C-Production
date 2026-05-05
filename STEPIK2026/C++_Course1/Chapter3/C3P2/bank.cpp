#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int sum, pay;
	cout << "Введите сумму вклада: ";
	cin >> sum;
	if (sum > 10000) {
		pay = sum + sum * 0.05; //5% ставка при максимальной сумме
	} else {
		if (sum > 1000) { //>1000, но <=10000
			pay = sum + sum * 0.03; //3% ставка по депозиту
		} else { //<1000
			pay = sum + sum * 0.02; //2% при минимальной сумме 
		}
	}
	cout << "Получите через год: " << pay << " $\n";

	return 0;
} 
