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
    int count = 0;

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
    
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(a[i][j] == 0) {
                break;
            } else{
                if(j == COL - 1 && a[i][j] != 0) count ++;
            } 
        }
    }
    cout << count << endl;
    return 0;
}