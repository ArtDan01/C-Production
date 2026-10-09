#include <iostream>
using namespace std;
//put your code here
void order(int &a, int &b){
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
}
int main() {
	int a, b;
	cin >> a >> b;
	order(a, b);
	cout << "a=" << a << " b=" << b;
	return 0;
}