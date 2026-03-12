#include <iostream>
using namespace std;
int main() {
    // put your code here
    int input;
    cin >> input;
    int max = input;
    int sum = 0;
    while (input != 0){
        cin >> input;
        while(input / 10 != 0){
            if(input % 10 == 0){
                input /= 10;
                continue;
            } else {
                sum+=input%10;
                input /10; 
            }
            if(input / 10 == 0){
                if (input % 10 == 0) break;
                else sum += input%10; break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}