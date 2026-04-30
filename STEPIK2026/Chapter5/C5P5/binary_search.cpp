#include <iostream>
#include <cstdlib>
#define ARRAY_SIZE 10
using namespace std;

int main(){

    int a[ARRAY_SIZE] = {0};

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cin >> a[i];
    }
    int elem = 0;
    cin >> elem;

    int low = 0, up = ARRAY_SIZE - 1, middle;
    int find = -1; //индекс найденного элемента
    do {
    	middle = (low + up) / 2; //серединный элемент
    	if (elem == a[middle]) { //элемент найден
    		find = middle;
    		break;
    	}
    	if (elem < a[middle]) up = middle - 1; //ищем далее в левой половине
    	if (elem > a[middle]) low = middle + 1; //ищем далее в правой половине
    } while(low <= up);
    if (find == -1) {
    	cout << "no\n";
    } else {
    	cout << find << endl;
    }


    return 0;
}