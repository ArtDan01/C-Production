#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include <stdbool.h>

int64_t read_int64() {   
  int64_t local = 0;
  if (scanf("%" SCNd64, &local) != 1) {
      perror("Failed to read int64");
      exit(EXIT_FAILURE);
  }
  return local;
}

 struct maybe_int64 {
    int64_t value;
    bool valid;
  };
  
  struct maybe_int64 some_int64(int64_t i) {
    return (struct maybe_int64) { i, true };
  }
  
  const struct maybe_int64 none_int64 = { 0 };

  
  size_t read_size() { size_t sz = 0; scanf("%zu", &sz); return sz; }
  
  struct array_int {
    int64_t* data;
    size_t size;
  };
  
  void array_int_fill( int64_t* array, size_t sz ) {
    for( size_t i = 0; i < sz; i = i + 1 ) {
      array[i] = read_int64();
    }
  }
  
  struct array_int array_int_read() {
    const size_t size = read_size();
    if (size > 0) {
      int64_t* array = malloc( sizeof(int64_t) * size);
      array_int_fill( array, size );
      return (struct array_int) { .data = array, .size = size };
    }
    else return (struct array_int) {0};
  }
  
  // возвращает ошибку если индекс за пределами массива
  struct maybe_int64 array_int_get( struct array_int a, size_t i ) {
    if( i > a.size) return (struct maybe_int64){0};
    return (struct maybe_int64){a.data[i], true};
  }
  
  // возвращает false если индекс за пределами массива
  bool array_int_set( struct array_int a, size_t i, int64_t value ) {
    if(i > a.size) return false;
    a.data[i] = value;
    return true;
  }
  
  void array_int_print( struct array_int array ) {
    for (size_t i = 0; i < array.size; i = i + 1) {
      printf("%" PRId64 " " , array_int_get( array, i).value);
    }
  }
  
  struct maybe_int64 array_int_min( struct array_int array ) {
    if(array.size == 0) return (struct maybe_int64){0};
    int64_t min = *(array.data);
    for(int64_t* cur = array.data + 1; *cur < array.size; cur++){
      if(*cur < min) min = *cur;
    }
    return(struct maybe_int64){min, true};
  }

  
  void array_int_free( struct array_int a ) { 
      if ( a.size > 0 ) {
          free(a.data); 
          a.size = 0;
      } 
  }

  int main() {
    printf("Введите размер массива и элементы:\n");

    struct array_int arr = array_int_read();

    printf("Массив: ");
    array_int_print(arr);
    printf("\n");

    // Попробуем получить элемент
    size_t index = 1;
    struct maybe_int64 val = array_int_get(arr, index);
    if (val.valid) {
        printf("Элемент на позиции %zu: %" PRId64 "\n", index, val.value);
    } else {
        printf("Ошибка: индекс %zu вне диапазона\n", index);
    }

    // Попробуем установить значение
    int64_t new_value = 123;
    if (array_int_set(arr, index, new_value)) {
        printf("Установлено значение %" PRId64 " на позицию %zu\n", new_value, index);
    } else {
        printf("Ошибка установки значения по индексу %zu\n", index);
    }

    printf("Массив после установки: ");
    array_int_print(arr);
    printf("\n");

    // Найдём минимум
    struct maybe_int64 min_val = array_int_min(arr);
    if (min_val.valid) {
        printf("Минимум в массиве: %" PRId64 "\n", min_val.value);
    } else {
        printf("Массив пустой, минимум не найден\n");
    }

    // Освободим память
    array_int_free(arr);

    return 0;
}