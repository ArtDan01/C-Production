#include <iostream>
#include <cstdlib>
using namespace std;
#define ROW 3
#define COL 6
int main() {
    // put your code here
    int a[ROW][COL] = {0};
    int beg = 0;
    cin >> beg;
    srand(beg);
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            a[i][j] = rand() % 6;
        }
    }

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(a[i][j] == 0){
                cout << j << endl;
                break;
            }
        }
    }

    return 0;
}