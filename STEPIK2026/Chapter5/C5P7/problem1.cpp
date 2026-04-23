#include <iostream>
using namespace std;

int main() {
    const int ROW = 5;
    const int COL = 4;
    int a[ROW][COL];
    int beg;
    cin >> beg;
    srand(beg);
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            a[i][j] = rand() % 29 + 2;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    //обмен строк
    for (int j = 0; j < COL; j++) {
        int tmp = a[0][j]; //индекс первой строки 0
        a[0][j] = a[ROW - 1][j]; //индекс последней строки ROW-1
        a[ROW - 1][j] = tmp;
    }
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}