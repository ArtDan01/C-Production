#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int64_t* array_int_min( int64_t* array, size_t size ) 
{   int64_t* minimum = array;
    for (size_t i = 0; i < size; i++)
    {
        if(array[i] < *minimum) *minimum = array[i];
    }
    return minimum;
}

int main() {
    int64_t array[5] = {8, 4, 2, 5, 7};
    int64_t* minimum = array_int_min(array, 5);
    printf("%lld", *minimum);
    return 0;
}