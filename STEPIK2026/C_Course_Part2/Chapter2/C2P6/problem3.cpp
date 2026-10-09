#include <iostream>

template<typename ArrayType, typename SizeType>
void getArray(ArrayType *arr, SizeType i){
    for(SizeType N = 0; N < i; N++){
        std::cin >> arr[N];
    }
}

template<typename ArrayType, typename SizeType>
void printArray(ArrayType *arr, SizeType i){
    ArrayType *ptr = arr;
    for(SizeType N = 0; N < i; N++, ptr++){
        std::cout << *ptr << ' ';
    }
    std::cout << std::endl;
}

template<typename ArrayType, typename SizeType>
void transform(ArrayType *arr, SizeType i){
    ArrayType* ptr = arr;
    ArrayType* endPtr = arr + i - 1;
    for(SizeType N = 0; N < i / 2; N++, ptr++, endPtr--){
        ArrayType temp = *ptr;
        *ptr = *endPtr;
        *endPtr =temp;
    }
}
//put your code here
int main() {
    const int N = 10;
    const int M = 5;
    const int K = 7;
    int a[N];
    double b[M];
    char c[K];
    getArray(a,N);
    getArray(b,M);
    getArray(c,K);
    transform(a,N);
    transform(b,M);
    transform(c,K);
    printArray(a,N);
    printArray(b,M);
    printArray(c,K);
    return 0;
}