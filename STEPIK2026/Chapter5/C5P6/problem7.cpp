#include <iostream>
#include <cstdlib>
#define ARRAY_SIZE 10
using namespace std;
int main() {
    // put your code here
    int beg = 0;
    int zeros = 0;
    cin >> beg;
    srand(beg);
    int a[ARRAY_SIZE] = {0};

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 6;
        cout << a[i] << ' ';
    }
    cout << endl;
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        if(a[i] == 0){
            zeros++;
        } else {
            cout << a[i] << ' ';
        }
        if(i == ARRAY_SIZE - 1){
            for(size_t k = 0; k < zeros; k++){
                cout << '0' << ' ';
            }
            break;
        }у
    }
    return 0;
}

//! вариант преподавателя

#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int a[10];
    int beg;
    cin >> beg;
    srand(beg);
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 6;
        cout << a[i] << " ";
    }
    cout << endl;
    //считаем количество нулей
    int kol = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == 0) kol++;
    }
    int i = 0; //индекс в 
    while (kol > 0) { //цикл пока не передвинем все нули 
        if (a[i] == 0) {
            for (int j = i; j < N - 1; j++) {
                a[j] = a[j + 1];
            }
            a[N - 1] = 0;
            kol--; //уменьшаем количество нулей, которые нужно передвинуть
            //если был 0, то следующий элемент сам подвинулся на это место
            //поэтому i не продвигаем
        } else {
            i++; //если был не 0, то продвигаемся дальше 
        }
    }
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
