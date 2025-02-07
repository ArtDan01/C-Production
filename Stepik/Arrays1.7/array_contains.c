#include <stdio.h>
#include <stdlib.h>

int predicate(int x) {
    return x % 2 == 0;
}

int array_contains(int* array, int* limit, int** position) {
    *position = NULL; // Сбрасываем указатель перед поиском
    for (int* cur = array; cur < limit; cur++) {
        if (predicate(*cur)) {
            *position = cur;
            return 1; // Как только нашли, завершаем поиск
        }
    }
    return 0; // Если не нашли ни одного подходящего числа
}

int main() {
    int* lmin = NULL;
    int arr[] = {11, 15, 9, 7, 5, 3}; // Массив без четных чисел

    if (array_contains(arr, arr + sizeof(arr) / sizeof(arr[0]), &lmin)) {
        printf("Predicated is: %d\n", *lmin);
    } else {
        printf("Not predicated\n");
    }

    return 0;
}
