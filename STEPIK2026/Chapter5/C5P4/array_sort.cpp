#include <iostream>
#include <cstdlib>
#define ARRAY_SIZE 10
using namespace std;
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int imax = 0;
    int a[ARRAY_SIZE] = {0};

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand()% 20 + 1;
    }

    for(size_t i = 0; i < ARRAY_SIZE - 1; i++){
        int max = 0;
        for(size_t k = i + 1; k < ARRAY_SIZE; k++){
            if(a[k] > a[i]){
                int tmp = a[k];
                a[k] = a[i];
                a[i] = tmp;
            }
        }
    }
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cout << a[i] << '\t';
    }
    cout << endl;
    return 0;
}