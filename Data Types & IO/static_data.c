#include <stdint.h>
#include <stdio.h>
/* Здесь рассмотрим программу в следующем ключе: есть функция display с локальной переменной int n = 1. Вызовем функцию display 3 раза в мэйне и увидим, что значение
 у i всегда одинаковое, несмотря на то, что постоянно выполняется инкремент этой переменной:
i = 1
i = 1
i = 1
А теперь добавим функцию void display1 в которой зададим переменную i1 как static int:

i = 1
i = 1
i = 1

i = 1
i = 2
i = 3


К переменной был добавлено ключевое слово static, поэтому при завершении работы функции display переменная не уничтожается, 
ее память не очищается, наоборот, она сохраняется в памяти. И соответственно результат работы программы будет иным.
*/

void display(){
    int i = 0;
    i++;
    printf("i = %d\n", i);
}

void display1(){
    static int i1 = 0;
    i1++;
    printf("i = %d\n", i1);
}

int main(){
    display();
    display();
    display();

    display1();
    display1();
    display1();
    return 0;
}