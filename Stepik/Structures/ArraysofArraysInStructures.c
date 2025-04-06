#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdlib.h>

/* Вы можете пользоваться этими функциями из предыдущих заданий */

/* Структура, содержащая число и факт его наличия */
struct maybe_int64 {
    int64_t value;
    bool valid;
};

/* Структура, описывающая массив */
struct array_int {
    int64_t* data;
    size_t size;
  };

/* Считывание размера массива со стандартного ввода */
size_t read_size() {
    size_t local = 0;
    if (scanf("%zu", &local) != 1) {
        perror("Failed to read size_t");
        exit(EXIT_FAILURE);
    }
    return local;
}

/* Считывание числа в массив со ввода */
int64_t read_int64() {   
    int64_t local = 0;
    if (scanf("%" SCNd64, &local) != 1) {
        perror("Failed to read int64");
        exit(EXIT_FAILURE);
    }
    return local;
}

/* Заполнение массива данными со ввода */
void array_int_fill( int64_t* array, size_t sz ) {
    for( size_t i = 0; i < sz; i = i + 1 ) {
      array[i] = read_int64();
    }
}

/* Функция, возвращающая структуру, занимается чтением данных в массиве по индексу */
struct array_int array_int_read() {
    const size_t size = read_size();
    if (size > 0) {
      int64_t* array = malloc( sizeof(int64_t) * size);
      array_int_fill( array, size );
      return (struct array_int) { .data = array, .size = size };
    }
    else return (struct array_int) {0};
}

/* Возвращается ошибку, если индекс за пределами массива */
struct maybe_int64 array_int_get( struct array_int a, size_t i ) {
    if( i > a.size) return (struct maybe_int64){0};
    return (struct maybe_int64){a.data[i], true};
}

/* Возвращается false, если индекс за пределами массива */
bool array_int_set( struct array_int a, size_t i, int64_t value ) {
    if(i > a.size) return false;
    a.data[i] = value;
    return true;
}

/* Вывод массива */
void array_int_print( struct array_int array ) {
    for (size_t i = 0; i < array.size; i = i + 1) {
      printf("%" PRId64 " " , array_int_get( array, i).value);
    }
}

/* Нахождение минимального элемента */
struct maybe_int64 array_int_min( struct array_int array ) {
    if(array.size == 0) return (struct maybe_int64){0};
    int64_t min = *(array.data);
    for(int64_t* cur = array.data + 1; *cur < array.size; cur++){
      if(*cur < min) min = *cur;
    }
    return(struct maybe_int64){min, true};
}

/* Освобождение динамически выделенной памяти */
void array_int_free( struct array_int a ) { 
    if ( a.size > 0 ) {
        free(a.data); 
        a.size = 0;
    } 
}

void array_int_normalize( struct array_int array, int64_t m ) {
  for (size_t i = 0; i < array.size; i = i + 1) {
    array.data[i] = array.data[i] - m;
  }
}

/*  ---- maybe int[] ---- */

struct maybe_array_int {
  struct array_int value;
  bool valid;
};

struct maybe_array_int some_array_int(struct array_int array) {
  return (struct maybe_array_int) { array, true };
}

const struct maybe_array_int none_array_int = { {NULL, 0}, false };


/*  ---- int[][] ---- */

struct array_array_int {
  struct array_int* data;
  size_t size;
};

/*  --- строки ---  */

struct maybe_array_int array_array_int_get_row( struct array_array_int a, size_t i ) {
  if ( 0 <= i && i < a.size ) { return some_array_int( a.data[i] ); }
  else { return none_array_int; }
}

bool array_array_int_set_row( struct array_array_int a, size_t i, struct array_int value ) {
  if (0 <= i && i < a.size) {
    a.data[i] = value;
    return true;
  }
  else { return false; }
}

/*  --- get/set ---  */

struct maybe_int64 array_array_int_get( struct array_array_int a, size_t i, size_t j ) {
    if((i >=0 && i < a.size) && (j <))
}

bool array_array_int_set( struct array_array_int a, size_t i, size_t j, int64_t value ) {
  ???
}

/*  --- read/print ---  */

struct array_array_int array_array_int_read() {
 ???
}


void array_array_int_print( struct array_array_int array) {
  ???
}


/*  --- min/normalize ---  */

/* Найти минимальный элемент в массиве массивов */
struct maybe_int64 array_array_int_min( struct array_array_int array ) {
 ???
}

/* Вычесть из всех элементов массива массивов число m */
void array_array_int_normalize( struct array_array_int array, int64_t m) {
  for (size_t i = 0; i < array.size; i = i + 1) {
    const struct maybe_array_int cur_row = array_array_int_get_row( array, i );
    if (cur_row.valid) {
         array_int_normalize( cur_row.value, m );
    }
  }
}

void array_array_int_free( struct array_array_int array ) {
  ???
}

/* Функция проверки правильности работы всего написанного */
void perform() {
    struct array_array_int array = array_array_int_read();
    struct maybe_int64 m = array_array_int_min( array );
    if (m.valid) {
      array_array_int_normalize( array, m.value );
      array_array_int_print( array );
    }
    array_array_int_free( array );
  }

int main(){

    return 0;
}