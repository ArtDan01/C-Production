#include <iostream>
using namespace std;
#define ROWS 4
#define COLS 5
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int array[ROWS][COLS] = {0};
    int* ptr = array[0];
    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++, ptr++){
            *ptr = rand() % 21 - 10;
            cout << *ptr << '\t';
            ptr += COLS;
        }
        cout << endl;
    }
    cout << endl;
    ptr = array[1];
    for(size_t i = 1; i < ROWS - 1; i++){
        for(size_t j = 0; j < COLS; j++, ptr++){
            *ptr = 0;
            ptr+=COLS;
        }
    }
    ptr = array[0];
    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++, ptr++){
            cout << *ptr << '\t';
            ptr += COLS;
        }
        cout << endl;
    }
    return 0;
}