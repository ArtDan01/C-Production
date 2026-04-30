#include <iostream>
using namespace std;
int main() {
    // put your code here
    int fee = 100;
    double percent = 0.05;
    int money;
    cin >> money;
    fee += (int)(money*percent);
    cout << fee << endl;
    return 0;
}

