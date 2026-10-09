#include<iostream>
using namespace std;
//put your code here
void transform(int &num){
    int digit = 0;
    int result = 0;
    while(num != 0){
        digit = num % 10;
        num /= 10;
        result = result * 10 + digit;
    }
    num = result;
}
int main(){
    int a;
	cin >> a;
	transform(a);
	cout << a;
    return 0;
}