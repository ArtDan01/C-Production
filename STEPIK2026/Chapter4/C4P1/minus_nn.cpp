#include <iostream>
using namespace std;
int main() {
    // put your code here
    int input;
    int even = 0;
    do{
        cin >> input;
        if(input % 2 == 0) even ++;
    } while(input != -99);
    cout << even << endl;
    return 0;
}