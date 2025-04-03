#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <stdint.h>


// Вам доступны следующие функции:
size_t read_size();
int64_t* array_int_min( int64_t* array, size_t size );
int64_t** marray_read( size_t* rows, size_t* sizes[] );
void marray_free( int64_t** marray, size_t rows );
void marray_print(int64_t** marray, size_t* sizes, size_t rows);


// Указатель на минимальное из двух чисел.
// если хотя бы одно число NULL, то возвращать второе
// если оба числа NULL результат NULL
int64_t* int64_ptr_min(int64_t* x, int64_t* y) {
    if (x == NULL) return y;  // Если x == NULL, вернуть y (может быть NULL)
    if (y == NULL) return x;  // Если y == NULL, вернуть x (уже знаем, что x != NULL)
    return (*x < *y) ? x : y; // Если оба не NULL, вернуть указатель на минимум
}

// Вернуть адрес минимального элемента массива массивов
int64_t* marray_int_min(int64_t** marray, size_t* sizes, size_t rows) {
  int64_t* min = NULL;
  for (size_t i = 0; i < rows; i++) {
      for (size_t j = 0; j < sizes[i]; j++) { // `sizes[i]`, а не `*sizes`
          min = int64_ptr_min(min, &marray[i][j]); // Сравниваем с min
      }
  }
  return min;
}

// Вычесть m изо всех элементов массива
void marray_normalize(int64_t** marray, size_t sizes[], size_t rows) {
  int64_t* min_ptr = marray_int_min(marray, sizes, rows);
  if (!min_ptr) return; // Проверка на NULL

  int64_t m = *min_ptr;
  for (size_t i = 0; i < rows; i++) {
      for (size_t j = 0; j < sizes[i]; j++) {
          marray[i][j] -= m;
      }
  }
}

// Прочитать, найти минимум и нормализовать массив, вывести результат
void perform() {
  size_t rows;
  size_t* sizes;
  
  // Считываем массив массивов
  int64_t** marray = marray_read(&rows, &sizes);
  if (!marray) {
      return; // Ошибка выделения памяти
  }
  
  // Находим минимум
  int64_t* minimum = marray_int_min(marray, sizes, rows);
  intptr_print(minimum);
  printf("\n");

  // Нормализация массива
  if (minimum) {
      marray_normalize(marray, sizes, rows, *minimum);
  }

  // Вывод нормализованного массива
  marray_print(marray, sizes, rows);

  // Освобождение памяти
  free(sizes);
  marray_free(marray, rows);
}


int main()
{

    return 0;
}