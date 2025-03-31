#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

// эти функции вы уже реализовали на предыдущих шагах
// можете их использовать, они вам уже доступны.
int64_t* array_int_read( size_t* size );
int64_t* array_int_min( int64_t* array, size_t size); 


// Выводит None если x == NULL, иначе число, на которое указывает x.
void intptr_print( int64_t* x ) 
{
    if (x == NULL) printf("%s", "None");
    else
    {
        printf("%" PRId64, *x);
    }
}

size_t read_size() 
{
    size_t local = 0;
    if (scanf("%zu", &local) != 1) {
        perror("Failed to read size_t");
        exit(EXIT_FAILURE);
    }
    return local;
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
    return 0;
}