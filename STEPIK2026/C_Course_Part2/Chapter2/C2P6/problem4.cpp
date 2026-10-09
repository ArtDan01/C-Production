#include <iostream>
using namespace std;
//put your code here
template<typename ArrayType, typename SizeType>
void getArray(ArrayType *arr, SizeType i){
    for(SizeType N = 0; N < i; N++){
        std::cin >> arr[N];
    }
}

template<typename ArrayType, typename SizeType>
decltype(auto) average(ArrayType *arr, SizeType i){
    ArrayType sum = 0;
    for(SizeType N = 0; N < i; N++, arr++){
        sum += *arr;
    }
    return (sum / i);
}

int main() {
    const int N = 10;
    const int M = 5;
    const int K = 7;
    int a[N];
    double b[M];
    short c[K];
    getArray(a, N);
    getArray(b, M);
    getArray(c, K);
    cout << average(a, N) << endl;
    cout << average(b, M) << endl;
    cout << average(c, K) << endl;
    return 0;
}