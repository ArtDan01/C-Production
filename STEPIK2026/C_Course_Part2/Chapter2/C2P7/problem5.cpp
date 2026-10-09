#include <iostream>
using namespace std;
//put your code here
/**
 * 6 digits numbers guaranteed
 */
#define MAX 999
bool ticket(int num, int* a, int* b){
    *a = 0; *b = 0;
    for(int i = 0; i < 3; i++){
        *b += num % 10;
        num /= 10;
    }
    for(int i = 0; i < 3; i++){
        *a += num % 10;
        num /= 10;
    }
    return *a == *b;
}

int main() {
    int value;
    cin >> value;
    int  sum_first, sum_last;
    if (ticket(value, &sum_first, &sum_last)) {
        cout << "HAPPY ";
    } else {
        cout << "UNHAPPY ";
    }
    cout << sum_first << " " << sum_last;
    return 0;
}