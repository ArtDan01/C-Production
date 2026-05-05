#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
#define ARRAY_SIZE 10
int main() {
    // put your code here
    int a[ARRAY_SIZE];
    int beg;
    cin >> beg;
    srand(beg);
    int sum = 0;
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 51;
        cout << a[i] << ' ';
        sum += a[i];
    }
    cout << endl;
    double average = (double)sum / ARRAY_SIZE; 
    cout << fixed << setprecision(2) << average << endl;
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        if(a[i] < average) cout << a[i] << ' ';
    }
    return 0;
}