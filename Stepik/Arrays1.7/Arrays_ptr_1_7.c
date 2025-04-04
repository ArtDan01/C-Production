#include <stdio.h>
#include <stdlib.h>

void count(int* a){
    a++;
}˜

int main(){
    int x = 1;
    for (int i = 0; i < 10;  i++){
        count(&x);
        printf("%d", x);
    }
    return 0;
}