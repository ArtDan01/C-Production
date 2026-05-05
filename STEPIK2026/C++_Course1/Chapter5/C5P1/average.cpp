#include <iostream>
#include <iomanip>
#define ARRAY_SIZE 10
using namespace std;

int main(){
    int sum = 0;
    int less = 0;
    int arr[ARRAY_SIZE] = {0};
    for (size_t i = 0; i < ARRAY_SIZE; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    double average = (double)sum / ARRAY_SIZE; 
    for (size_t i = 0; i < ARRAY_SIZE; i++){
        if( arr[i] < average) less++;
    }
    cout << fixed << setprecision(1) << average << ' ' << less << endl;
    return 0;
}