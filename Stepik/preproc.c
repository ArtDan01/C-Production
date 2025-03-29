#include <stdio.h>
#include <stdint.h>

#define ARRAY_LENGTH 10
const int32_t array[ARRAY_LENGTH] = {0,0,0,0,0,0,0,0,0,0};

size_t count_zeroes( const void* data, size_t sz )
{
    size_t zeroes = 0;
    for (size_t i = 0; i < sz; i++)
    {
        if (*((char*)data+i) == 0) zeroes ++;
    }
    return zeroes;
}

int main()
{
    size_t sz = sizeof(array);
    size_t zeroes = count_zeroes(array, sz);
    printf("%lu\n", zeroes);
    return 0;
}