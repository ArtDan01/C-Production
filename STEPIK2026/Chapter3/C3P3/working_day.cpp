#include <iostream>
using namespace std;
int main() {
    // put your code here
    int working_day;
    cin >> working_day;
    switch (working_day){
        case(1): case(2): case(3): case(4): case(5):
            cout << "Working day" << endl;
            break;
        case(6):
            cout << "Saturday" << endl;
            break;
        case(7):
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Error" << endl;
            break;
    }
    return 0;
}