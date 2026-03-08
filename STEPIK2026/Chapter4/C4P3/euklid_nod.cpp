#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
    // int a = 256;
    // int b = 96;
	int a, b;
	cin >> a >> b;
	int max, min;
	max = a > b ? a : b;
	min = a < b ? a : b;
	while (max % min != 0) {
        int tmp = min;
        min = max % min;
		max = tmp;
	}
	cout << min;
	return 0;
}