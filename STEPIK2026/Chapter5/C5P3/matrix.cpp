#include <iostream>
#include <cstdlib>
using namespace std;
#define ROW 3
#define COL 4
int main() {
    // put your code here
    int a[ROW][COL] = {0};
    int beg = 0;
    cin >> beg;
    srand(beg);
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            a[i][j] = rand() % 21 + 10;
        }
    }
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    for(int j = 0; j < COL; j++){
        a[1][j] = 0;
    }
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}