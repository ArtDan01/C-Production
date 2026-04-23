#include <iostream>
#include <iomanip>
#include <cstdlib>
#define ARRAY_SIZE 10
using namespace std;

int main (){
    int beg = 0;
    int a[ARRAY_SIZE] = {0};
    cin >> beg;
    int imax = 0;
    srand(beg);
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 16;
        cout << a[i] << ' ';
    }

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        if(a[i] >= a[imax]) imax = i;
    }
    cout << endl;
    if(imax == 0){
        cout << "ERROR" << endl;
    } else {
        int sum = 0;

        for(size_t i = 0; i < imax; i++){
            sum += a[i];
        }

        double average = (double)sum / (imax);
        cout << setprecision(1) << fixed << average << endl;
    }
    return 0;
}