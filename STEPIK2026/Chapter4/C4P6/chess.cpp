#include <iostream>
using namespace std;
int main() {
    // put your code here
    int size;
    cin >> size;
    for(int i = 1; i <= 8; i++){
        for(int N = 1; N <= size; N++){
            for(int j = 1; j <= 8; j++){
                for(int M = 1; M <= size; M++){
                    if(j % 2 == 0){
                        if(i % 2 != 0){
                        cout << '*';
                        } else{cout << '-';}
                    } else{
                        if(i % 2 != 0){
                        cout << '-';
                        } else{cout << '*';}
                    }
                }  
            }
            cout << endl;
        }
    }
    return 0;
}
