#include <iostream>
#define ARRAY_SIZE 7
using namespace std;

int main(){
    int a[ARRAY_SIZE] = {0};
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cin >> a[i];
    }
    int imax = 0;
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        if(i % 2 == 0){
            if(a[i] > a[imax]) imax = i;
        }
    }
    a[imax] = 0;

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cout << a[i] << ' ';
    }
    return 0;
}