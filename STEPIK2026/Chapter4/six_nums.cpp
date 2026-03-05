#include <iostream>
using namespace std;
int main() {
    // put your code here
    int chet = 0;
    int nechet = 0;
    int num;
    for(int i = 0; i < 6; i++){
        cin >> num;
        if(num%2 == 0) chet++;
        else nechet ++;
    }
    cout << nechet << endl;
    return 0;
}