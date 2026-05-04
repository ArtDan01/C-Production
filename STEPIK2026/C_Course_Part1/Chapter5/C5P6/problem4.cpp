#include <iostream>
#define ARRAY_SIZE 6
using namespace std;

int main(){
    int a[ARRAY_SIZE] = {0};
    int elem = 0;
    int count = 0;
    int sum = 0;
    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cin >> a[i];
    }
    cin >> elem;

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        if(a[i] < elem){
            count++;
            sum += a[i];
        }
    }

    cout << sum << ' ' << count  << endl;

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        if(i % 2 != 0) a[i] = elem;
        cout << a[i] << ' ';
    }
    return 0;
}