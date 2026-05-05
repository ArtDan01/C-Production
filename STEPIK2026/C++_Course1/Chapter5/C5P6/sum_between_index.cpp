#include <iostream>
#include <cstdlib>
#define ARRAY_SIZE 10
using namespace std;

int main(){
    int beg = 0;
    cin >> beg;
    srand(beg);

    int a[ARRAY_SIZE] = {0};
    int zeros = 0;
    int sum = 0;
    int first = 0; int second = 0;
    int was = 0;

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 7 - 3;
        if(a[i] == 0){
            zeros ++;
            if(!was){
                first = i;
                was = 1;
                cout << a[i] << ' ';
                continue;
            }
            if(was && !second){
                second = i;
            }
        }
        cout << a[i] << ' ';
    }

    cout << endl;
    cout << zeros << endl;
    switch(zeros){
        case 0:
            cout << "ERROR" << endl;
            break;
        case 1:
            cout << sum << endl;
            break;
        default:
            for(size_t i = first; i < second; i++){
                sum += a[i];
            }
            cout << sum << endl;
            break;
    }
    return 0;
}