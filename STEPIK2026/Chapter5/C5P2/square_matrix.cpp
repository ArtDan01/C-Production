#include <iostream>
#include <cstdlib>
using namespace std;
#define ROW 5
#define COL 5
int main() {
    // put your code here
    int a[ROW][COL] = {0};
    int beg = 0;
    cin >> beg;
    srand(beg);
    int sum = 0;
    int imin = 0;

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            a[i][j] = rand() % 11;
        }
    }

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }

    for(int j = 0; j < COL; j++){
        for(int i = 0; i < ROW; i++){
            if(a[i][j] < a[imin][j]){
                imin = i;
            }
        }
        sum += a[imin][j];
        imin = 0;
    }
    cout << sum << endl;
    // cout << sum << endl;
    return 0;
}