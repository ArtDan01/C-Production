#include <iostream>
#define ARRAY_SIZE 10
using namespace std;

int main() {
    int i = 0;
    int sum = 0;
    int a[ARRAY_SIZE] = {0};

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cin >> a[i];
    }

    while(a[i] < 0){
        i++;
        if(i == ARRAY_SIZE) break;
    }

    if(i - ARRAY_SIZE != 1){
        for(size_t k = i; k < ARRAY_SIZE; k++){
            sum += a[k];
        }
    } else{
        sum = 0;
    }
    cout << sum << endl;
    return 0;
}