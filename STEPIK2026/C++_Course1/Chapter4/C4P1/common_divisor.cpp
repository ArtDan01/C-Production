#include <iostream>
using namespace std;
int main() {
    // put your code here
    int a;
    int b;
    int divisor;
    cin >> a >> b;
    if(a > b){
        for(int i = 1; i <= b; i ++){
            if(b % i == 0){
                if(a % i ==0){
                divisor = i;
                cout << divisor << " ";
                }
            }
        }
    }
    else {
         for(int i = 1; i <= a; i ++){
            if(a % i == 0){
                if(b % i ==0){
                divisor = i;
                cout << divisor << " ";
                }
            }
        }
    }
    return 0;
}