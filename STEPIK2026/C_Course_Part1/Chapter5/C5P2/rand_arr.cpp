#include <iostream>
#include <cstdlib>
using namespace std;
#define ARRAY_SIZE 10
int main() {
    // put your code here
    int a[ARRAY_SIZE];
    int beg;
    cin >> beg;
    srand(beg);
    int imin = 0;
    int imax = 0;
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 21 - 5;
        cout << a[i] << ' ';
        if(a[i] < a[imin]) imin = i;
        if(a[i] > a[imax]) imax = i;
    }
    int sum = a[imin] + a[imax];
    cout << endl;
    cout << sum << endl; 
    return 0;
}