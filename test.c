#include <stdio.h>
#include <stdint.h>

void array_fib(int* array, int* limit) {
    int size = limit - array;
    if(size == 0 || size == 1){array[0] = 1;}
    else{
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i < size; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }   
    }
}







int main() {
    /*int x = 10; //В памяти лежит число
    printf("x = %d", x); // Выведет 10
    printf("\n");
    int* ptr; //Задаю указатель на инт, он просто ложится в память и не указывает на х, инт чтобы он понимал что нужно считать 4 байта
    printf("Адрес указателя ptr = %p", ptr); //Он выведет адрес указателя в памяти, который не хранит в себе адреса переменной х, а просто адрес указателя
    printf("\n");
    printf("Число на которое указывает ptr = %d", *ptr); //Он выведет число которое хранится по адресу указателя потому что мы его разыменовали через *
    printf("\n");
    ptr = &x;
    printf("Адрес переменной х на которую теперь указывает ptr = &x = %p", ptr);
    printf("\n");
     printf("Число по адресу на которое указывает ptr через разыменовывание *ptr = %d", *ptr);
    printf("\n");
    */
    int array[10];
    array_fib(array, array + 10);
    printf("\n");
    for(int i = 0; i < *array + 9; i++){
        printf("%d ", array[i]);
    }
    return 0;
}