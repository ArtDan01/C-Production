#include <stdio.h>
#include <ctype.h>

int sum(int *array, size_t size)
{
    int sum = 0;
    for(size_t i = 0; i < size; i++)
    {
        sum+=array[i];
    }
    return sum;
}

int array_min(int *array, size_t size)
{
    int min = *array;
    for(size_t i = 0; i < size; i++)
    {
        if( array[i] < min) min = array[i];
    }
    return min;
}

void to_upper_case(char *str)
{
    
    while(*str != '\0'){
        *str = toupper[*str];
        str++;
    }
}


int main(){

    return 0;
}