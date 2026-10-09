#include <iostream>
using namespace std;
//put your code here
void initArray(int* arrPtr, int size){
    int* ptr = arrPtr;
    for(size_t i = 0; i < size; i++,ptr++){
        *ptr = rand() % 16 - 5;
    }
}
void printArray(int* arrPtr, int size){
    int* ptr = arrPtr;
    for(size_t i = 0; i < size; i++, ptr++){
        cout << *ptr << ' ';
    }
    cout << endl;
}
int sumArray(int* arrPtr, int size){
    int sum = 0;
    int* ptr = arrPtr;
    for(size_t i = 0; i < size; i++, ptr++){
        sum+=*ptr;
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    srand(n);
    const int M = 10;
    int a[M];
    initArray(a, M);
    printArray(a, M);
    cout << sumArray(a, M);
    return 0;
}