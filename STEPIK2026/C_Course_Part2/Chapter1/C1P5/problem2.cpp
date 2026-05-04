#include <iostream>
using namespace std;
#define ROWS 5
#define COLS 6
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int array[ROWS][COLS] = {0};
    int* ptr = array[0];
    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++, ptr++){
            *ptr = rand() % 11 - 3;
            cout << *ptr << '\t';
        }
        cout << endl;
    }
    ptr = &array[0][1];
    for(size_t i = 0; i < ROWS; i++){
        cout << *ptr << '\t';
        ptr += COLS;
    }
    
    cout << endl;
    return 0;
}