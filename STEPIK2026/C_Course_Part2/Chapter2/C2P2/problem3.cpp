#include <iostream>
using namespace std;
#define N 3
#define M 4
//put your code here
//инициализация двумерного массива случайными числами
void initArray(int mas[][M], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < M; j++)
			mas[i][j] = rand() % 11;
}

//вывод двумерного массива на консоль в виде таблицы
void printArray(int mas[][M], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < M; j++)
			cout << mas[i][j] << "\t";
		cout << "\n";
	}
}

int sumOfMax(int mas[][M], int n) {
	int sum = 0;
    int max = 0;
	for(int j = 0; j < M; j++){
        for(int i = 0; i < n; i++){
            if(mas[i][j] > max) max = mas[i][j];
        }
        sum += max;
        max = 0;
    }
	return sum;
}

int main() {
    int n;
    cin >> n;
    srand(n);
    int a[N][M];
    initArray(a, N);
    printArray(a, N);
    int sum = sumOfMax(a, N);
    cout << sum;
    return 0;
}