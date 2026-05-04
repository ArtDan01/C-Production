#include <iostream>
using namespace std;
#define ROWS 4
#define COLS 3
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int array[ROWS][COLS] = {0};
    int* ptr = array[0];
    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++, ptr++){
            *ptr = rand() % 11;
            cout << *ptr << '\t';
        }
        cout << endl;
    }
    ptr = array[0];
    int zeros = 0;
    for(size_t i =0; i < ROWS * COLS; i++, ptr++){
        if(*ptr == 0) zeros++;
    }
    cout << zeros << endl;
    return 0;
}