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
   
int64_t** marray_read( size_t* rows, size_t** sizes ) 
{
    *rows = read_size();
    *sizes = malloc(sizeof(size_t) * (*rows));
    if (*sizes == NULL) {
        perror("Failed to allocate memory for sizes");
        return NULL;
    }
    int64_t** marray = malloc(sizeof(int64_t*) * (*rows));
    if (marray == NULL) {
        perror("Failed to allocate memory for marray");
        free(*sizes);
        return NULL;
    }
    for (size_t i = 0; i < *rows; i++) {
        (*sizes)[i] = read_size();
        marray[i] = malloc(sizeof(int64_t) * (*sizes)[i]);
        if (marray[i] == NULL) {
            perror("Failed to allocate memory for marray row");
            for (size_t j = 0; j < i; j++) {
                free(marray[j]);
            }
            free(marray);
            free(*sizes);
            return NULL;
        }
        array_int_fill(marray[i], (*sizes)[i]);
    }
    return marray;

}

void marray_free( int64_t** marray, size_t rows ) {
    for(size_t i = 0; i < rows; i++)
    {
        free(marray[i]);
    }
    free(marray);
   }

void marray_print(int64_t** marray, size_t* sizes, size_t rows) {
    for( size_t i = 0; i < rows; i = i + 1 ) {
        array_int_print( marray[i], sizes[i] );
        print_newline();
    }
}

void intptr_print( int64_t* x ) 
{
    if (x == NULL) printf("%s", "None");
    else
    {
        printf("%" PRId64, *x);
    }
}


// void performing() 
// {
//     size_t size = read_size();
//     int64_t* array = array_int_read(&size);
//     int64_t * minimum = array_int_min(array, size);
//     intptr_print(minimum);
//     // освободим память, выделенную для массива
//     free(array);
// }


int64_t* int64_ptr_min(int64_t* x, int64_t* y) {
    if (x == NULL) return y;  // Если x == NULL, вернуть y (может быть NULL)
    if (y == NULL) return x;  // Если y == NULL, вернуть x (уже знаем, что x != NULL)
    return (*x < *y) ? x : y; // Если оба не NULL, вернуть указатель на минимум
}

// Вернуть адрес минимального элемента массива массивов
int64_t* marray_int_min( int64_t** marray, size_t* sizes, size_t rows ) {
    int64_t* minimum = *marray;
    for(size_t i = 0; i < rows - 1; i ++){
        for(size_t j = 0; j < *sizes; j++){
            if(marray[i][j] < marray[i+1][j]) *minimum = marray[i+1][j];
        }
    }

    return minimum;
}

// Вычесть m изо всех элементов массива
void marray_normalize( int64_t** marray, size_t sizes[], size_t rows, int64_t m ) {
    for(size_t i = 0; i < rows - 1; i++){
        for(size_t j = 0; j < *sizes; j++){
            marray[i][j] -=m;
        }
    }
}

// Прочитать, найти минимум и нормализовать массив, вывести результат
void perform() {
    size_t rows = read_size();
    int64_t* marray = marray_read(&rows);
    
    int64_t* minimum = marray_int_min(array, size);
    intptr_print(minimum);
  
    marray_normalize(array, size);
  
    marray_print(marray, )
  
    // Освобождение памяти
    marray_free(marray, )
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