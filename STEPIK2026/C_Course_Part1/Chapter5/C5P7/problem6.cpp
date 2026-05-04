#include <iostream>
using namespace std;
#define ROWS 5
#define COLS 5

/*
! Сумму элементов матрицы справа (элементов обозначенных О)

*   *   *   *   O
*   *   *   O   O
*   *   O   O   O
*   *   *   O   O
*   *   *   *   O 

*/
int main() {
    // put your code here
    int beg = 0;
    int sum = 0;
    cin >> beg;
    srand(beg);
    int a[ROWS][COLS] = {0};
    
    for (size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++){
            a[i][j] = rand() % 11 - 5;
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    // for(size_t i = 0; i < ROWS; i++){
    //     for(size_t j = )
    // }

    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j <= i; j++){
            cout << a[i][j] << '\t';
            if(i > ROWS / 2){
                break;
            }
            
        }
        cout << endl;
    }
    
    return 0;
}