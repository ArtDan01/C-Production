#include <iostream>
#define ARRAY1_SIZE 10
#define ARRAY2_SIZE 7
using namespace std;
int main() {
    // put your code here
    /* Объявление нулевых массивов */
    int a[ARRAY1_SIZE] = {0};
    int b[ARRAY2_SIZE] = {0};

    /* Ввод массивов */
    for(size_t i = 0; i < ARRAY1_SIZE; i++){
        cin >> a[i];
    }

    for(size_t j = 0; j < ARRAY2_SIZE; j++){
        cin >> b[j];
    }
    /* На этом этапе введены 2 массива */ 
    /* Подготовка большего массива */
    for(size_t i = 0; i < ARRAY1_SIZE - 1; i++){
        for(size_t j = i+1; j < ARRAY1_SIZE; j++){
            if(a[i] == a[j]) a[j] = 0;
        }
    }

    for(size_t k = ARRAY1_SIZE; k > 0; k--){
        for(size_t i = 0; i < k; i++){
            if(a[i] > a[i+1]){
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }
    }

    /* Подготовка меньшего массива */
    for(size_t i = 0; i < ARRAY2_SIZE - 1; i++){
        for(size_t j = i+1; j < ARRAY2_SIZE; j++){
            if(b[i] == b[j]) b[j] = 0;
        }
    }

    for(size_t k = ARRAY2_SIZE; k > 0; k--){
        for(size_t i = 0; i < k; i++){
            if(b[i] > b[i+1]){
                int tmp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = tmp;
            }
        }
    }
    /* На этом этапе 2 массива без дупликатов и с нулями в начале */
    

    for(size_t i = 0; i < ARRAY2_SIZE; i++){
        cout << b[i] << ' ';
    }
    cout << endl;
    for(size_t i = 0; i < ARRAY1_SIZE; i++){
        cout << a[i] << ' ';
    }
    return 0;
}