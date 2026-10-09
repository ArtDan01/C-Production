#include <iostream>
#include <cstdlib>
#define STUDENTS 8
using namespace std;

int transformEval(int eval){
    if(eval <= 50) return 2;
    if (eval >= 51 && eval <= 69) return 3;
    if (eval >= 70 && eval <= 89) return 4;
    if (eval >= 90) return 5;
    return -1;
}

int main() {
    int beg;
    cin >> beg;
    srand(beg);
    int arr[STUDENTS] = {0};
    int tfArr[STUDENTS] = {0};
    for(size_t i = 0; i < STUDENTS; i ++){
        arr[i] = rand() % 101;
    }
    for(size_t i = 0; i < STUDENTS; i++){
        tfArr[i] = transformEval(arr[i]);
        cout << arr[i] << '(' << tfArr[i] << ')' << ' ';
    }
    cout << endl;

    return 0;
}