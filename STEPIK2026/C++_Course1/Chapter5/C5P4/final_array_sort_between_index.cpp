#include <iostream>
using namespace std;
#define ARRAY_SIZE 10
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    int first = 0;
    int imin = 0; int imax = 0;
    srand(beg);
    int a[ARRAY_SIZE] = {0};
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 41 - 20;
    }
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cout << a[i] << '\t';
    }
    cout << endl;
    for(int i = 0; i < ARRAY_SIZE; i++){
        if (a[i] < 0 && !first){
            imin = i;
            first = 1;
            continue;
        }
        if(a[i] < 0) imax = i;
    }
    //сортировка пузырьком
    // мы всегда сдвигаем ПРАВУЮ часть рассматриваемого массива, потому что самый последний (правый) элемент уже отсортирован и всплыл пузырьком
    for(int k = imax - 1; k > 0; k--){ // этот цикл режет правую часть массива, по которому будет гулять внуцтренним циклом
        for(int i = imin; i <= k; i++){ // здесь мы гуляем по порезанному массиву, надо попарно сравнивать и выталкивать элемент за границы выделенного массива
            if(a[i] > a[i+1]){ // если предыдущий (1ый) больше следующего (2го) то просто поменяем их местами без отслеживания индексов нам ПОХУЙ
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }
        }
    }

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cout << a[i] << '\t';
    }
    cout << endl;
    return 0;
}