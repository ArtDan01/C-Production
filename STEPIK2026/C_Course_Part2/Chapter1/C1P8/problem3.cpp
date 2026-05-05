#include <iostream>
using namespace std;
#define ARRAY_SIZE 8
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int array[ARRAY_SIZE] = {0};
    int* ptr = array;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        *ptr = rand() % 13 - 5;
        cout << *ptr << ' ';
    }
    cout << endl;
    
    int* neg = nullptr;
    int* min = array;
    ptr = array;

    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        if(*ptr < *min) min = ptr;
    }
    ptr = &array[ARRAY_SIZE - 1];

    for(size_t k = ARRAY_SIZE - 1; k > 0; k--, ptr--){
        if(*ptr < 0 && neg == nullptr) neg = ptr;
    }
    ptr = array;
    if(neg != nullptr){
        int tmp = *min;
        *min = *neg;
        *neg = tmp;
    } else {
        int tmp = *min;
        *min = array[2];
        array[2] = tmp;
    }
    
    ptr = array;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        cout << *ptr << ' ';
    }
    return 0;
}