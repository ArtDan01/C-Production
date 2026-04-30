#include <iostream>
#include <cstdlib>
using namespace std;
#define ROW 7
#define COL 7
int main() {
    // put your code here
    int a[ROW][COL] = {0};
    int beg = 0;
    cin >> beg;
    srand(beg);

    int imax = 0; int jmax = 0;
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            a[i][j] = rand() % 101;
        }
    }

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }

    for(int i = 0; i <= ROW / 2; i++){
        for(int j = i; j < COL - i; j++){
            if(a[i][j] > a[imax][jmax]){
                imax = i; 
                jmax = j;
            }
        }
    }
    cout << a[imax][jmax] << endl;
    return 0;
}