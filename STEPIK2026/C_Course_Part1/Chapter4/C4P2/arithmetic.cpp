#include <iostream>
using namespace std;
#include <iomanip>

int main() {
	setlocale(LC_ALL, "rus");
	int grade, k = 0, sum = 0;
	double sred;
	cin >> grade;
	while (grade >= 0) {
		sum += grade;
		k++;
		cin >> grade;
	}
	if (k>0) {
		sred = (double)sum / k;
		cout << fixed << setprecision(1) << sred;
	} else
    
		cout << "No data";
	return 0;
}