#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

// Считать int64_t из ввода
int64_t read_int64() {   
    int64_t local = 0;
    if (scanf("%" SCNd64, &local) != 1) {
        perror("Failed to read int64");
        exit(EXIT_FAILURE);
    }
    return local;
}

// Считать size_t из ввода
size_t read_size() {
    size_t local = 0;
    if (scanf("%zu", &local) != 1) {
        perror("Failed to read size_t");
        exit(EXIT_FAILURE);
    }
    return local;
}

// Заполнить массив числами из ввода
void array_int_fill(int64_t* array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        array[i] = read_int64(); // Правильно заполняем массив
    }
}

// Выделить память и считать массив
int64_t* array_int_read(size_t* size) {
    *size = read_size();
    int64_t* arr = malloc(sizeof(int64_t) * (*size));
    if (arr == NULL) {
        perror("Failed to allocate memory");
        return NULL;
    }
    array_int_fill(arr, *size);
    return arr;
}

int64_t* array_int_min( int64_t* array, size_t size ) 
{   int64_t* minimum = &array[0];
    for (size_t i = 0; i < size; i++)
    {
        if(&array[i] < minimum) minimum = &array[i];
    }
    return minimum;
}
   

void intptr_print( int64_t* x ) 
{
    if (x == NULL) printf("%s", "None");
    else
    {
        printf("%" PRId64, *x);
    }
}


void perform() 
{
    size_t size = read_size();
    int64_t* array = array_int_read(&size);
    int64_t * minimum = array_int_min(array, size);
    intptr_print(minimum);
    // освободим память, выделенную для массива
    free(array);
}

int main() {
    size_t size = 0;
    int64_t* array = array_int_read(&size); // Считываем массив

    if (array == NULL) {
        return 1; // Ошибка выделения памяти
    }

    // Выводим массив для проверки
    for (size_t i = 0; i < size; i++) {
        printf("%" PRId64 " ", array[i]);
    }
    printf("\n");

    free(array); // Освобождаем память
    return 0;
}