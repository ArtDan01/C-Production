#include <iostream>
#include <cstdlib>
#define ARRAY_SIZE 9
using namespace std;

int main(){
    int beg = 0;
    int a[ARRAY_SIZE] = {0};
    int index = -1;
    int num = 0;
    cin >> beg;
    cin >> num;
    srand(beg);
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 21 - 10;
        cout << a[i] << ' ';
    }
    cout << endl;

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        if(a[i] == num) {
            index = i;
            cout << index << endl;
            break;
        }
        if(i == ARRAY_SIZE - 1 && a[i] != 0) cout << "NO" << endl;
    }
    if(index != -1){
        int tmp = a[0];
        a[0] = a[index];
        a[index] = tmp;
    }
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cout << a[i] << ' ';
    }
    return 0;
}