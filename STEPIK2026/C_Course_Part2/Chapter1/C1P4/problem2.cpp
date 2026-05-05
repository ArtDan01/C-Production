#include <iostream>
#include <iomanip>
using namespace std;
#define ARRAY_SIZE 7

int main(){

    int a[ARRAY_SIZE] = {0};
    int* ptr = a;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        cin >> *ptr;
    }
    ptr = a;
    for (size_t i = 0; i < ARRAY_SIZE - 1; i += 2) {
    int tmp = *ptr;
    *ptr = *(ptr + 1);
    *(ptr + 1) = tmp;
    ptr+=2;
    }
    ptr = a;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        cout << *ptr << ' ';
    }
    return 0;
}