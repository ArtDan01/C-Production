#include <iostream>
#include <type_traits>

template <typename arrData, typename arrSize, typename varIndex>
    void remove(arrData *arr, arrSize size, varIndex idx) {
        if(idx < 0 || idx >= size) return;
        for (arrSize i = idx; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        } 
        arr[size - 1] = 0.0;
    }

void remove(char* arr, int size, int idx) {
    if(idx < 0 || idx >= size) return;
    for (int i = idx; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    } 
        arr[size - 1] = '#';
}

template <typename arrData, typename arrSize>
    void read(arrData *arr, arrSize size){
        for(arrSize i = 0; i < size; i++, arr++){
            std::cin >> *arr;
        }
    }

template <typename arrData, typename arrSize>
    void print(arrData *arr, arrSize size){
        for(arrSize i = 0; i < size; i++, arr++){
            std::cout << *arr;
            std::cout << ' ' ;
        }
        std::cout << std::endl;
    }

int main() {
    const int N = 10;
    int a[N];
    double b[N];
    char c[N];
    read(a, N);
    int ind;
    std::cin >> ind;
    remove(a, N, ind);
    print(a, N);
    read(b, N);
    std::cin >> ind;
    remove(b, N, ind);
    print(b, N);
    read(c, N);
    std::cin >> ind;
    remove(c, N, ind);
    print(c, N);
    return 0;
}