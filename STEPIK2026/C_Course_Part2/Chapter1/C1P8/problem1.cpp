#include <iostream>
using namespace std;
#define ARRAY_SIZE 10
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int array[ARRAY_SIZE] = {0};
    int* ptr = array;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        *ptr = rand() % 11 - 5;
        cout << *ptr << ' ';
    }
    cout << endl;
    ptr = array;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        if(*ptr < 0) *ptr = 0;
        cout << *ptr << ' ';
    }
    cout << endl;
    return 0;
}