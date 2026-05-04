#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
#define ARRAY_SIZE 5
int main() {
    // put your code here
    int a[ARRAY_SIZE];
    int beg;
    cin >> beg;
    srand(beg);
    int located = 0;
    int neg = -1; int pos = -1;

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 21 - 10;
        cout << a[i] << ' ';
        if(!located){
            if(a[i] < 0){
                neg = i;
                located = 1;
            }
        }
        if(a[i] > 0) pos = i;
    }
    int tmp = a[neg];
    a[neg] = a[pos];
    a[pos] = tmp;
    cout << endl;
    if(neg < 0 || pos < 0) cout << "ERROR" << endl;
    else{
        for(size_t i = 0; i < ARRAY_SIZE; i++){
            cout << a[i] << ' ';
        }
    }
    return 0;
}