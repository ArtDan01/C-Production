#include <iostream>
#include <cstdlib>
#define ARRAY_SIZE 10
using namespace std;

int main(){
    int beg = 0;
    int elem;
    cin >> beg >> elem;
    srand(beg);
    int find = -1;
    int a[ARRAY_SIZE] = {0};
    for(int i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 21;
        cout << a[i] << '\t';
    }
    cout << endl;

    for(int i = 0; i < ARRAY_SIZE; i++){
        if(a[i] == elem){
            find = i;
            break;
        }
    }
    if(find == -1){
        cout << "no" << endl;
    } else { // левая часть
        for(int k = find - 1; k > 0; k--){ // этот цикл режет правую часть массива, по которому будет гулять внуцтренним циклом
            for(int i = 0; i < k; i++){ // здесь мы гуляем по порезанному массиву, надо попарно сравнивать и выталкивать элемент за границы выделенного массива
                if(a[i] < a[i+1]){ // если предыдущий (1ый) меньше следующего (2го) то просто поменяем их местами без отслеживания индексов нам ПОХУЙ
                    int tmp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = tmp;
                }
            }
        }
        // правая часть
        for(int k = ARRAY_SIZE - 1; k > find; k--){ // этот цикл режет правую часть массива, по которому будет гулять внуцтренним циклом
            for(int i = find + 1; i < k; i++){ // здесь мы гуляем по порезанному массиву, надо попарно сравнивать и выталкивать элемент за границы выделенного массива
                if(a[i] > a[i+1]){ // если предыдущий (1ый) больше следующего (2го) то просто поменяем их местами без отслеживания индексов нам ПОХУЙ
                    int tmp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = tmp;
                }
            }
        }

        for(int i = 0; i < ARRAY_SIZE; i++){
            cout << a[i] << '\t';
        }
    }
    return 0;
}