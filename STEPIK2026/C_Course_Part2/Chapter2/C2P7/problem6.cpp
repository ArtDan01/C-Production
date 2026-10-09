#include <iostream>
#define SIZE 7
using namespace std;
//put your code here
int prodPositive(int* arr, int size){
    int prod = 1;
    for(size_t i = 0; i < size; i++){
        if(arr[i] > 0) prod *= arr[i];
    }
    return prod;
}
void init(int* arr, int size){
    for(size_t i = 0; i < size; i++){
        arr[i] = rand() % 21 - 10;
    }
}
void print(int* arr, int size){
    for(size_t i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
}
int main() {
   //put your code here
   int beg;
   cin >> beg;
   srand(beg);
   int arr[SIZE] = {0};
   init(arr, SIZE);
   print(arr, SIZE);
   cout << endl << prodPositive(arr, SIZE);
   return 0;
}