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

size_t read_size() {
    size_t local = 0;
    printf("[read_size] Ожидается ввод size_t: ");
    if (scanf("%zu", &local) != 1) {
        perror("[read_size] Ошибка чтения size_t");
        exit(EXIT_FAILURE);
    }
    printf("[read_size] Прочитано: %zu\n", local);
    return local;
}

int64_t read_int64() {   
    int64_t local = 0;
    printf("[read_int64] Ожидается ввод int64: ");
    if (scanf("%" SCNd64, &local) != 1) {
        perror("[read_int64] Ошибка чтения int64");
        exit(EXIT_FAILURE);
    }
    printf("[read_int64] Прочитано: %" PRId64 "\n", local);
    return local;
}

/* Заполнение массива данными со ввода */
void array_int_fill( int64_t* array, size_t sz ) {
    for( size_t i = 0; i < sz; i = i + 1 ) {
      array[i] = read_int64();
    }
}

/* Функция, возвращающая структуру, занимается чтением данных и заполнением массива */
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
    if((i >=0 && i < a.size) && (j>= 0 && j <a.data[i].size)) return(struct maybe_int64){ a.data[i].data[j], true};
    else return (struct maybe_int64){ .value = 0, .valid = false };
}

bool array_array_int_set( struct array_array_int a, size_t i, size_t j, int64_t value ) {
    if (i < a.size && j < a.data[i].size) {
        a.data[i].data[j] = value;
        return true;
    }
    return false;
}

/*  --- read/print ---  */

struct array_array_int array_array_int_read() {
    struct array_array_int a;
    a.size = read_size();  // читаем количество строк

    if (a.size <= 0) return (struct array_array_int){NULL, 0};

    a.data = malloc(sizeof(struct array_int) * a.size);
    if (!a.data) {
        perror("malloc failed for a.data");
        return (struct array_array_int){NULL, 0};
    }

    for (size_t i = 0; i < a.size; i++) {
        a.data[i].size = read_size();
        if (a.data[i].size <= 0) {
            // Освобождаем уже выделенную память
            for (size_t j = 0; j < i; j++) {
                free(a.data[j].data);
            }
            free(a.data);
            return (struct array_array_int){NULL, 0};
        }

        a.data[i].data = malloc(sizeof(int64_t) * a.data[i].size);
        if (!a.data[i].data) {
            perror("malloc failed for a.data[i].data");
            // Освобождаем уже выделенную память
            for (size_t j = 0; j < i; j++) {
                free(a.data[j].data);
            }
            free(a.data);
            return (struct array_array_int){NULL, 0};
        }

        array_int_fill(a.data[i].data, a.data[i].size);
    }

    return a;
}


void array_array_int_print( struct array_array_int array) {
    if(array.size==0)    printf("\n");
    for(size_t i = 0; i < array.size; i++){
        array_int_print(array.data[i]);  // Печатаем всю строку
        printf("\n");
}
}


/*  --- min/normalize ---  */

/* Найти минимальный элемент в массиве массивов */
struct maybe_int64 array_array_int_min(struct array_array_int a) {
    struct maybe_int64 min = { .valid = false };
    printf("[debug] array_array_int_min called\n");
    // Первый проход — найти минимум
    for (size_t i = 0; i < a.size; ++i) {
        struct array_int arr = a.data[i];
        for (size_t j = 0; j < arr.size; ++j) {
            if (!min.valid || arr.data[j] < min.value) {
                min.valid = true;
                min.value = arr.data[j];
            }
        }
    }

    // Второй проход — печатаем строки, где есть минимум
    if (min.valid) {
        for (size_t i = 0; i < a.size; ++i) {
            struct array_int arr = a.data[i];
            for (size_t j = 0; j < arr.size; ++j) {
                if (arr.data[j] == min.value) {
                    printf("%zu\n", i);
                    break; // Переходим к следующей строке
                }
            }ы
        }
    }

    return min;
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
    for(size_t i = 0; i < array.size; i++)
    {
        free(array.data[i].data);
    }
    free(array.data);
}

/* Функция проверки правильности работы всего написанного */
void perform() {

    struct array_array_int array = array_array_int_read();

    struct maybe_int64 m = array_array_int_min(array);
    if (m.valid) {
        array_array_int_normalize(array, m.value);
        array_array_int_print(array);
    } 

    array_array_int_free(array);

}

int main() {
    perform();
    return 0;
}