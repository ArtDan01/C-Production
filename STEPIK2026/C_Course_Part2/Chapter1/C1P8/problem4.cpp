#include <iostream>
using namespace std;
#define ARRAY_SIZE 20
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int array[ARRAY_SIZE] = {0};
    // int array[ARRAY_SIZE] = {1, 1, -1, -1, 0, -1, 1, -1, 0, -1, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0 };
    int* ptr = array;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        *ptr = rand() % 3 - 1;
        cout << *ptr << ' ';
    }
    cout << endl;
    int max_zeros = 0;
    int zeros =  0;
    ptr = array;
    while(ptr <= array + ARRAY_SIZE){
        if(*ptr != 0){
            max_zeros < zeros ? max_zeros = zeros : max_zeros;
            zeros = 0;
            ptr++;
        } else {
            zeros++;
            ptr++;
            if(ptr == array + ARRAY_SIZE) {
                max_zeros < zeros ? max_zeros = zeros : max_zeros;
                break;
            }
        }
    }
    cout << max_zeros << endl;
    return 0;
}