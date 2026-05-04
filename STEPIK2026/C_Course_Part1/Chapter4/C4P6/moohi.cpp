#include <iostream>
using namespace std;
<<<<<<< HEAD
=======

int main(){
    //put your code here
    int n, k;
    cin >> n >> k;
    int n_tmp = n;
    int reserve = n_tmp;
    int time = 0;
    for(int i = 1; i <= k; i++){
        if(i % 5 == 0) n++;
        if(n <= n_tmp / 10){
            n -= 2;
        }else{
            n--;
        }
    }
    cout << n << ' ';

    do{
        if(time % 5 == 0) n_tmp++; 
        
        if(n_tmp <= reserve / 10){
            n_tmp -= 2;
        } else {
            n_tmp--;
        }
        time++;
    }while(n_tmp != 0);
    cout << time << endl;
    return 0;
}
#include <iostream>
using namespace std;
>>>>>>> ae378688305ce469928b26eb99136619fee845fc
int main() {
    // put your code here
    int n, k;
    cin >> n >> k;
<<<<<<< HEAD
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
    
=======
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

>>>>>>> ae378688305ce469928b26eb99136619fee845fc
    return 0;
}