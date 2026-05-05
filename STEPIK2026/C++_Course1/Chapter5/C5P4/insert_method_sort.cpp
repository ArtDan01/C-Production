#include <iostream>
#include <cstdlib>
#define ARRAY_SIZE 10
using namespace std;
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int a[ARRAY_SIZE] = {0};

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 41 + 10;
    }

    for(size_t i = 0; i < ARRAY_SIZE - 1; i++){
        
    }
    return 0;
}