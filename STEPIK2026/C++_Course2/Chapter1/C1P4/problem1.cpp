#include <iostream>
#include <iomanip>
using namespace std;
#define ARRAY_SIZE 12
int main() {
    // put your code here
    int beg = 0; 
    cin >> beg;
    srand(beg);
    int a[ARRAY_SIZE] = {0};
    int* ptr = a;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        *ptr = rand() % 91 - 45;
        cout << *ptr << ' ';
    }
    int poz = 0, neg = 0;
    ptr = a;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        if(*ptr < 0) neg++;
        if(*ptr > 0)poz++;
    }
    cout << endl;
    cout << fixed << setprecision(1) << ((double)poz / ARRAY_SIZE)* 100<<'%' << ' ' <<  ((double)neg / ARRAY_SIZE) * 100 <<'%' << endl;
    return 0;
}