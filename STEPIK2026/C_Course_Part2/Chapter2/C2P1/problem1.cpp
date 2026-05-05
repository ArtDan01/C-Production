#include<iostream>
using namespace std;

int simple(int a){
    if(a <= 1) return 0;
    for(size_t i = 2; i <= a; i++){
        if(a % i == 0 && i != a) return 0;
    }
    return 1;
}
//put your code here
int main(){
    int x;
    cin >> x;
    if (simple(x)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}