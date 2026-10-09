#include <iostream>
using namespace std;
//put your code here
void read(int* arr, int size){
    for(size_t i = 0; i < size; i++){
        cin >> arr[i];
    }
}
int& myMin(int* arr, int size, int& idx){
    int imin = 0;
    for(size_t i = 0; i < size; i++){
        if(arr[i] <= arr[imin]) imin = i;
    }
    idx = imin + 1;
    return arr[imin];
}
int main() {
	const int N = 5;
	const int M = 10;
	int a[N], b[M];
	int minim, imin;
	read(a, N);
	//put your code here
    minim = myMin(a, N, imin);
	cout << minim << " " << imin << endl;
	read(b, M);
	//put your code here
    minim = myMin(b, M, imin);
	cout << minim << " " << imin << endl;
	return 0;
}