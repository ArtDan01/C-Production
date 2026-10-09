#include <iostream>
using namespace std;
//put your code here
void read(int* arr, int size){
    for(size_t i = 0; i < size; i++){
        cin >> arr[i];
    }
}
int sumOfNumbers(int number){
    int sum = 0;
    if (number < 0) number *= -1;
    for(; number > 0; number /= 10){
        sum += number % 10;
    }
    return sum;
}
int idxMaxDigSum(int* arr, int size){
    int idx = 0;
    for(size_t i = 0; i < size; i++){
        if(sumOfNumbers(arr[i]) > sumOfNumbers(arr[idx])) idx = i;
    }
    return idx;
}
int main() {
   //put your code here
   const int SIZE = 5;
   int array[SIZE] = {0};
   read(array, SIZE);
   cout << idxMaxDigSum(array, SIZE) << endl;
   return 0;
}