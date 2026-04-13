#include <iostream>
using namespace std;
int main() {
    // put your code here
    int n, k;
    cin >> n >> k;
    int tmp_k = k;
    int tmp_n = n;

    for(int i = 1; i <= k; i++){
       if(i % 5 == 0) n++;
       if(n <= tmp_n / 10){
        n -= 2;
       } else{
        n--;
       }
    }
    
    return 0;
}