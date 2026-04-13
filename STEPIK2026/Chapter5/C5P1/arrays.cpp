#include <iostream>
using namespace std;
#define ARR_SIZE 6
int main(){
    int zeros = 0;
    int sum = 0;
    // int a[ARR_SIZE] = {0};
    int a[ARR_SIZE] = {5, -1, 0, 0, 4 -7};
    for(int i = 0; i < ARR_SIZE; i++){
        // cin >> a[i];
        if(a[i] == 0) zeros ++;
        if(i % 2 == 0) sum += a[i];
    }
    cout << zeros << ' ' << sum << endl;

    return 0;
}