#include <iostream>
using namespace std;
#define ARRAY_SIZE 10
int tmp = 0;
int main(){
    int mas[ARRAY_SIZE] = {2, 3, 1, 4, 7, 5, 6 ,9, 8, 11};
    for(int i = 0; i < ARRAY_SIZE - 1; i++){
        for(int j = 1; j< ARRAY_SIZE; j++){
            if(mas[j] < mas [i]){
                tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
                cout << mas[j] << ' ';
            }
            tmp = 0;
        }
        // cout << mas[i] << ' ';
    }
    return 0;
}