#include <iostream>
using namespace std;
#define ARRAY_SIZE 10

int main(){
    int beg = 0;
    int array[ARRAY_SIZE] = {0};
    cin >> beg;
    srand(beg);
    int* ptr = array;

    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        *ptr = rand() % 41 - 20;
        cout << *ptr << ' ';
    }
    cout <<endl;
    ptr = array;
    int* endptr = &array[ARRAY_SIZE - 1];
    for(size_t i = 0; i < ARRAY_SIZE / 2; i++, ptr++){
        int tmp = *ptr;
        *ptr = *endptr;
        *endptr = tmp;
        endptr--;
    }
    ptr = array;

    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        cout << *ptr << ' ';
    }
    cout << endl;
    return 0;
}