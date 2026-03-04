#include <iostream>
using namespace std;
int main() {
    // put your code here
    int input;
    cin >> input;
    int decs = input / 1000;
    int cents = input / 100;
    int tens = input / 10;
    int ones = input % 10;
    if(cents = 0 || decs != 0) cout << "ERROR" << endl;
    else if(cents == tens == ones){
        cout << "YES" << endl;
    }
    return 0;
}