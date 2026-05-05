#include <iostream>
using namespace std;
#define ROWS 4
#define COLS 4
int main() {
    // put your code here
    int passed = 0;
    int a[ROWS][COLS] = {0};
    
    for (size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++){
            cin >> a[i][j];
        }
    }
    for(size_t i = 0; i < ROWS; i++){
        if(!passed){
            for(size_t j = 0; j < COLS; j++){
                if(a[i][j] > 0){
                    break;
                }
                if(j == COLS - 1){
                    passed = 1;
                    cout << i + 1 << endl;
                }
            }
        }
        if(!passed && i == ROWS - 1) cout << "NO" << endl;
    }
    return 0;
}