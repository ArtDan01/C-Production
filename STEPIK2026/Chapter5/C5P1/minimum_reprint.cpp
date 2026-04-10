#include <iostream>
using namespace std;
#define ARRAY_SIZE 7
int main() {
    int arr[ARRAY_SIZE] = {0};

    for (size_t i = 0; i < ARRAY_SIZE; i++){
        cin >> arr[i];
    }

    int min = arr[0];
    int imin = 0;

    for(size_t i = 1; i < ARRAY_SIZE; i++){
        if(arr[i] < arr[imin]) imin = i;
    }

    arr[imin] = 0;

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
    // put your code here
    return 0;
}