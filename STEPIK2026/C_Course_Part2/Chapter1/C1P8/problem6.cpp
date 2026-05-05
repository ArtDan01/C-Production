#include <iostream>
#define ROWS 4
#define COLS 5
using namespace std;

int main(){
    int beg = 0;
    cin >> beg;
    srand(beg);
    int array[ROWS][COLS] = {0};
    int* ptr = array[0];
    
    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++, ptr++){
            *ptr = rand() % 21 - 10;
            cout << *ptr << '\t';
            // ptr += COLS;
        }
        cout << endl;
    }

    ptr = array[0];

    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++, ptr++){
            if(i % 2 != 0){
                *ptr = 0;
            }
        }
    }

    ptr = array[0];
    cout << endl;

    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++, ptr++){
            cout << *ptr << '\t';
        }
        cout << endl;
    }
    
    return 0;
}