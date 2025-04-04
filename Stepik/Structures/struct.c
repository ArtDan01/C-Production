#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

// Определение структуры
struct maybe_int64 {
    bool valid;
    int64_t value;
};

// Функция создания структуры с числом
struct maybe_int64 some_int64(int64_t i) {
    return (struct maybe_int64){ .value = i, .valid = true };
}

// Функция вывода maybe_int64
void maybe_int64_print(struct maybe_int64 i) {
    if (i.valid) 
        printf("Some %" PRId64, i.value);
    else 
        printf("None\n");
}

// Функция выбора минимального maybe_int64
struct maybe_int64 maybe_int64_min(struct maybe_int64 a, struct maybe_int64 b) {
    if (!a.valid && !b.valid) return (struct maybe_int64){0};
    if (!a.valid) return (struct maybe_int64){b.value, true}; 
    if (!b.valid) return (struct maybe_int64){a.value, true}; ; 
    return (struct maybe_int64){(a.value < b.value) ? a.value : b.value, true};
}

// Точка входа
int main() {
    struct maybe_int64 first = {true, 88};
    struct maybe_int64 second = {true, 42};
    
    struct maybe_int64 min = maybe_int64_min(first, second);
    
    printf("Minimum value: ");
    maybe_int64_print(min);

    return 0;
}