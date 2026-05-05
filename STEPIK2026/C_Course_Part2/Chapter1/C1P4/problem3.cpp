#include <iostream>
using namespace std;
#define ARRAY_SIZE 10
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int a[ARRAY_SIZE] = {0};
    int* ptr = a;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        *ptr = rand() % 41 - 20;
        cout << *ptr << ' ';
    }
    cout << endl;
    ptr = a;
    int* eptr = &a[ARRAY_SIZE];
    for(size_t i = 0; i < ARRAY_SIZE - 1; i++){
        int tmp = a[i];
        *ptr = *eptr;
        *eptr = tmp;
        ptr++;
        eptr--;
    }
    ptr = a;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        cout << *ptr << ' ';
    }
    cout << endl;
    return 0;
}