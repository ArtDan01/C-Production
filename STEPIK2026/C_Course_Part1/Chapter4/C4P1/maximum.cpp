#include <iostream>
using namespace std;
int main() {
    // put your code here
    int max = 0;
    int nums;
    int a;
    cin >> nums;
    for (int i = 0; i < nums; i++){
        cin >> a;
        if(i == 0 || a > max) max = a;
    }
    cout << max << endl;
    return 0;
}