#include <iostream>
using namespace std;
#define N 4
#define M 5
void initArray(int mas[][M], int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < M; j++){
            mas[i][j] = rand() % 12 - 3;
        }
    }
}

void printArray(int mas[][M], int n) {
    //put your code here
    for(int i = 0; i < n; i++){
        for(int j = 0; j < M; j++){
            cout << mas[i][j] << '\t';
        }
        cout << endl;
    }
}

int minArray(int m[], int n) {
    //put your code here
    int min = m[0];
    for(size_t i = 0; i < n; i++, m++){
        if(*m < min) min = *m;
    }
    return min;
}

int main() {
    int seed;
    cin >> seed;
    srand(seed);
    int a[N][M];
    initArray(a, N);
    printArray(a, N);
    //put your code here
    for(size_t i = 0; i < N; i++){
        int min = minArray(a[i], M);
        cout << min << ' ';
    }
    cout << endl;
    int absolut_min = a[0][0];
    for(size_t i = 0; i < N*M; i++){
        absolut_min = minArray(a[0], N*M);
    }
    cout << absolut_min;
    return 0;
}