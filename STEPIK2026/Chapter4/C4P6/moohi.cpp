#include <iostream>
using namespace std;
int main() {
    // put your code here
    int n, k;
    cin >> n >> k;
    int n_tmp = n;
    int problem = 1;
    switch(problem){
        case 1:
            for(int i = 1; i <= k; i++){
               if(i % 5 == 0){
                n++;
                continue;
               }else{
                if(n <= n_tmp / 10 && n != 0){
                    n -= 2;
                } else {
                    n --;
                }
               }
            }
    }

    return 0;
}