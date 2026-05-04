#include <iostream>
using namespace std;
int main() {
    // put your code here
    int number;
    cin >> number;
    
    for(int i = 2; i <= number; i++){
        if(i == number) cout << "YES" << endl;
        else{
            if(number % i == 0 || number == 1){
                cout << "NO" << endl;
                break;
            }
        }
    }
    return 0;
}