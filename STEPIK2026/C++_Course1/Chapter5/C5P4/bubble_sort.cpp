#include <iostream>
#include <cstdlib>
using namespace std;
#define ARRAY_SIZE 10
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int a[ARRAY_SIZE] = {0};
    //* заполнение массива случайными числами
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 19 - 3; // ! от -3 до 15
    }

    //* сортировка методом пузырька
    for(size_t k = ARRAY_SIZE - 1; k > 0; k--){
        for(size_t i = 0; i < k; i++){
            if(a[i] > a[i+1]){
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }
        }
    }
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cout << a[i] << '\t';
    }
    cout << endl;
    return 0;
}