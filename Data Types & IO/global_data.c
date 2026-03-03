#include <stdio.h>
#include <stdint.h>

int n = 5;

void printn()
{
    n++;
    printf("n = %d \n", n);
}

int main(){
    printn();// n = 6
    n++;
    printf("n = %d\n", n); // n = 7
    return 0;
}