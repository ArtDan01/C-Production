#include <stdio.h>
#include <stdlib.h>

#define SIZE 1

void array_fib(int* array, int* limit) {
    int size = limit - array; // Вычисляем размер массива

    if (size >= 1) array[0] = 1; 
    if (size >= 2) array[1] = 1;

    for (int i = 2; i < size; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
}


int main(){
    int arr[SIZE];
    array_fib(arr, arr + SIZE);

    for (int i = 0; i < SIZE; i++){
    printf("%d\t", arr[i]);

    }

    return 0;
}