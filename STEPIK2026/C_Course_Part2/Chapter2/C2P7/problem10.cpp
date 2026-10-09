#include <iostream>
using namespace std;
#define N 4
#define M 6
//put your code here ne rabotaet
void sdvig(int* arr, int size, int cnt){
    for(size_t count = 0; count < cnt; count++){
        int last = arr[size - 1];
        for(size_t i = 0; i < size; i++){
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        arr[0] = last;
    }
}
void transform(int mas[][M], int n, int k){
    for(size_t i = 0; i < n; i++){
        sdvig(mas[i], M, k);
    }
}
void initMas(int mas[][M], int n){
    for(size_t i = 0; i < n; i++){
        for(size_t j = 0; j < M; j++){
            mas[i][j] = rand() % 26 + 1;
        }
    }
}
void printMas(int mas[][M], int n){
    for(size_t i = 0; i < n; i++){
        for(size_t j = 0; j < M; j++){
            cout << mas[i][j] << '\t';
        }
        cout << endl;
    }
}
int main() {
    int a[N][M];
    int beg;
    cin >> beg;
    srand(beg);
    int k; //число сдвигов
    cin >> k;
    initMas(a, N);
    cout << "Исходный массив:\n";
    printMas(a, N);
    transform(a, N, k);
    cout << "Преобразованный массив:\n";
    printMas(a, N);
    return 0;
}