#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>

// вы можете реализовать эти функции для более удобного считывания чисел
int64_t read_int64();
size_t read_size();

// заполнить уже выделенный массив array размера size числами
// числа нужно считывать из потока ввода
void array_int_fill(int64_t* array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        if (scanf("%" SCNd64, &array[i]) != EOF) {
            continue;
        } else {
            perror("Failed to read int64");
            return;
        }
    }
}

int64_t read_int64() {   
    int64_t local = 0;
    scanf("%" SCNd64, &local);
    return local;
}

size_t read_size() {
    size_t local = 0;
    scanf("%zu", &local);
    return local;
}

// Считать размер массива в *size, выделить память под массив и заполнить его числами, вызвав array_int_fill
int64_t* array_int_read(size_t* size) {
    int64_t* arr = malloc(sizeof(int64_t) * (*size)); // выделяем память
    if (arr == NULL) {
        perror("Failed to allocate memory");
        return NULL;
    }
    array_int_fill(arr, *size); // заполняем массив
    return arr; // возвращаем указатель на массив
}

int main(){

    return 0;
}