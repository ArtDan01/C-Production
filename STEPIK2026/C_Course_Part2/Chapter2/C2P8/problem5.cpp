#include <iostream>
#define _N_INT_         10
#define _N_DOUBLE_      7
#define _N_CHAR_        5
using namespace std;
//put your code here
template <typename arrData, typename arrSize>
    arrData* maximum(arrData* arr, arrSize size){
        arrData* maximum = arr;
        for(arrSize i = 0; i < size; i++, arr++){
            if(*arr > *maximum) maximum = arr;
        }
        return maximum;
    }

template <typename arrData, typename arrSize>
    void read(arrData *arr, arrSize size){
        int* max = NULL;
        for(arrSize i = 0; i < size; i++, arr++){
            std::cin >> *arr;
        }
    }

template <typename arrData, typename arrSize>
    void print(arrData *arr, arrSize size){
        arrData* MAX = maximum(arr, size);
        *MAX = 0;
        for(arrSize i = 0; i < size; i++, arr++){
            std::cout << *arr;
            std::cout << ' ' ;
        }
        std::cout << std::endl;
    }

void print(char *arr, int size){
        char* MAX = maximum(arr, size);
        *MAX = ' ';
        for(int i = 0; i < size; i++, arr++){
            std::cout << *arr;
            std::cout << ' ' ;
        }
        std::cout << std::endl;
    }

int main() {
    //put your code here
    int intArr[_N_INT_];
    double doubleArr[_N_DOUBLE_];
    char charArr[_N_CHAR_];
    int* max = NULL;
    read(intArr, _N_INT_);
    print(intArr, _N_INT_);
    read(doubleArr, _N_DOUBLE_);
    print(doubleArr, _N_DOUBLE_);
    read(charArr, _N_CHAR_);
    print(charArr, _N_CHAR_);
    return 0;
}