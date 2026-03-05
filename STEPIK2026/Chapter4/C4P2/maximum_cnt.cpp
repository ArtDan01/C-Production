#include <iostream>
using namespace std;
int main() {
    // put your code here
    int number, max;
    int cnt = 0;
    cin >> number;
    if(number == 0){cout << "0" << endl;return 0;}
    max = number;
    do{
        cin >> number;
        if(number > max) {
            max = number;
            cnt = 1;
        }
        if(number == max) cnt ++;

    } while(number != 0);

    cout << cnt << endl;
    return 0;
}