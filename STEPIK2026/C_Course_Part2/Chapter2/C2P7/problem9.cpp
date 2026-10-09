#include <iostream>
#include <iomanip>
#define ROWS 4
#define COLS 5
using namespace std;
//put your code here
void initMatrix(double mas[][COLS], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < COLS; j++)
			cin >> mas[i][j];
}
void printMatrix(double(*mas)[COLS], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < COLS; j++)
			cout << fixed << setprecision(2) << mas[i][j] << "\t";
		cout << "\n";
	}
}
void signRevert(double mas[][COLS], int idx) {
    if(idx > COLS) return;
    for(size_t i = 0; i < ROWS; i++){
        mas[i][idx - 1] *= -1;
    }
}
int main() {
   //put your code here
    double arr[ROWS][COLS] = {0};
    initMatrix(arr, ROWS);
    int usr_idx;
    cin >> usr_idx;
    signRevert(arr, usr_idx);
    printMatrix(arr, ROWS);
   return 0;
}