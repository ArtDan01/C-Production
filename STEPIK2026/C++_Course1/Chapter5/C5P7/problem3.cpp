#include <iostream>
using namespace std;
#define ROWS 3
#define COLS 4
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    int elem;
    cin >> elem;
    srand(beg);
    int a[ROWS][COLS] = {0};
    int passed = 0;
    for (size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++){
            a[i][j] = rand() % 6;
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }

    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++){
            if(a[i][j] == elem){
                passed = 1;
                cout << '(' << i << ',' << j << ')' << ' ';
            }
        }
        if(!passed && i == ROWS - 1) cout << "NO" << endl;
    }
    return 0;
}