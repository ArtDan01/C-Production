#include <iostream>
#include <time.h>

#define MAP_ROWS 9
#define MAP_COLUMNS 9

int main(){
    time_t now = time2posix(now);
    int numbers_array[MAP_ROWS][MAP_COLUMNS] = {0};
    int *ptr = numbers_array[0];
    for(size_t i = 0; i < MAP_ROWS; i++, ptr++){
        srand(now);
    }
    return 0;
}