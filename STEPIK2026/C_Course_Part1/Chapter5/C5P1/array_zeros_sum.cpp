#include <iostream>
#define ARRAY_SIZE 6
using namespace std;

int main(){
    int zeros = 0;
    int sum = 0;
    int arr[ARRAY_SIZE] = {0};
    for (size_t i = 0; i < ARRAY_SIZE; i++){
        cin >> arr[i];
        if(arr[i] == 0) zeros ++;
        if(i % 2 == 0){
            sum += arr[i];
        }
    }

    cout << zeros << ' ' << sum << endl;
    return 0;
}