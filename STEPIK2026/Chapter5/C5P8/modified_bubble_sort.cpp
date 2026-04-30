#include <iostream>
using namespace std;
#define N 10
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int imax = 0;
    int a[N] = {0};
    // int a[N] = {1,7,2,-7,9,-10,2,-6,1,6};
    for(size_t i = 0; i < N; i++){
        a[i] = rand() % 25 - 12;
        cout << a[i] << ' ';
    }
    cout << endl;
    for(size_t i = 0; i < N; i++){
        if(a[i] > a[imax]) {
            imax = i;
        }
    }
    cout << imax << endl;
    int last; //индекс последнего обмена
    int k = imax;
    //пока правая граница подмассива не равна -1
    while (k > 0) {
    	last = -1; //флаг: обменов не было
    	for (int i = 0; i < k; i++) { 
    		if (a[i] > a[i + 1]) {
    			int tmp = a[i];
    			a[i] = a[i + 1];
    			a[i + 1] = tmp;
    			last = i; //запоминаем индекс последнего обмена
    		}
    	}
    	k = last; //следующий просмотр до последнего обмена
    }

    int k1 = N;
    //пока правая граница подмассива не равна -1
    while (k1 > 0) {
    	last = -1; //флаг: обменов не было
    	for (int i = imax; i < k1; i++) { 
    		if (a[i] < a[i + 1]) {
    			int tmp = a[i];
    			a[i] = a[i + 1];
    			a[i + 1] = tmp;
    			last = i; //запоминаем индекс последнего обмена
    		}
    	}
    	k1 = last; //следующий просмотр до последнего обмена
    }

    for(size_t i = 0; i < N; i++){
        cout << a[i] << ' ';
    }
    return 0;
}