#include <iostream>
using namespace std;
int main() {
    // put your code here
    int ROW = 4;
    int COL = 6;
    int a[ROW][COL] = {0};
    int beg = 0;
    cin >> beg;
    srand(beg);
    for(size_t i = 0; i < ROW; i++){
        for(size_t j = 0; j < COL; j++){
            a[i][j] = rand() % 7 - 3; // rand()%(B - A + 1) + A;
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    int zeros = 0;
    for(size_t j = 0; j < COL; j++){
        for(size_t i = 0; i < ROW; i++){
            if(a[i][j] == 0) zeros++;
        }
        cout << zeros << '\t';
        zeros = 0;
    }
    return 0;
}