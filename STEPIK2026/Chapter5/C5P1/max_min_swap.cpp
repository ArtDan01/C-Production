#include <iostream>
#define ARRAY_SIZE 6
using namespace std;

int main() {

    int arr[ARRAY_SIZE] = {0};
    // int arr[ARRAY_SIZE] = {9, 1, 4, 1, 9, 6};
    int imax = 0; int imin = 0;

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cin >> arr[i];
    }

    for(size_t i = 1; i < ARRAY_SIZE; i++){

        if(arr[i] >= arr[imax]){
            imax = i;
        }
        if(arr[i] < arr[imin]) {
            imin = i;
        }
    }

    int tmp = 0;
    tmp = arr[imax];
    arr[imax] = arr[imin];
    arr[imin] = tmp;
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cout << arr[i] << ' ';
    }
    // put your code here
    return 0;
}