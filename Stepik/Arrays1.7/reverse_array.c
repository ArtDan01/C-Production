#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void array_reverse(int* array, int size) {
    for(int i =0; i < size / 2; i++){
    swap (&array[i], &array[size - i - 1]);
    }
}

void array_reverse_ptr(int* array, int* limit) {
    int size = limit - array;
    for(int i =0; i < size / 2; i++){
    swap (&array[i], &array[size - i - 1]);
    }
}

int main (){
    int arr1[5] = {0, 1, 2, 3, 4};
    int arr2[5] = {10, 11, 12, 13, 14};

    array_reverse(arr1, 5);
    array_reverse_ptr(arr1, arr1+5);

    for (int i = 0; i < 5; i++){
        printf("%d\t", arr1[i]);
    }
    return 0;
}