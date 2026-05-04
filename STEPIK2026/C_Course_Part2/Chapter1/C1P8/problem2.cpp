#include <iostream>
#include <iomanip>
using namespace std;
#define ARRAY_SIZE 15
int main() {
    // put your code here
    int beg = 0; 
    cin >> beg;
    srand(beg);
    int array[ARRAY_SIZE] = {0};
    int* ptr = array;

    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        *ptr = rand() % 21 - 10;
        cout << *ptr << ' ';
    }
    cout << endl;
    int* neg = nullptr;
    int* max = &array[0];
    ptr = array;
    for(size_t i = 0; i < ARRAY_SIZE; i++, ptr++){
        if(*ptr < 0 && neg == nullptr){
            neg = &array[i];
        }
        if(*ptr >= *max) max = &array[i];
    }
    if(neg != nullptr){
        if(neg > max){
            int* tmp = max;
            max = neg;
            neg = tmp;
        }

        int sum = 0;
        int N = max - neg + 1 ;
        ptr = neg;

        for(size_t i = 0; i < N; i++, ptr++){
            sum+= *ptr;
        }
        double average = (double)sum / N;
        cout << fixed << setprecision(2) << average << endl;

    } else{
        cout << "ERROR" << endl;
    }
    return 0;
}