#include <iostream>
using namespace std;
#define ARRAY_SIZE 10
int main() {
    // put your code here
    int beg = 0;
    cin >> beg;
    srand(beg);
    int a[ARRAY_SIZE] = {0};

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        a[i] = rand() % 10 + 1;
        cout << a[i] << ' ';
    }
    cout << endl;
    int tmp,last;
    int up = ARRAY_SIZE - 1;
    int low = 0;

    while(low < up){
        last = -1;
        for(size_t i = low; i < up; i++){
            if (a[i] > a[i + 1]) {
		        tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
                last = i;
		    }
        }
        up = last;
        last = ARRAY_SIZE;
	    for (int i = up - 1; i >=low; i--) {
		    if (a[i] > a[i + 1]) {
		    	tmp = a[i];
		    	a[i] = a[i + 1];
		    	a[i + 1] = tmp;
		    	last = i;
		    }
	}
	low = last + 1;
    }

    for(size_t i = 0; i < ARRAY_SIZE; i++){
        cout << a[i] << ' ';
    }
    return 0;
}