#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    // put your code here
    int hours;
    double rate;
    cin >> hours >> rate;
    if(hours < 0 || rate < 0){
        cout << "ERROR" << endl; return 0;
    }
    int extra_hours = 0;
    double extra = 0.00;
    if(hours > 40){
        extra_hours = hours - 40;
        if(extra_hours > 0) extra = extra_hours * rate * 1.5;
    }
    double fee = (hours - extra_hours) * rate + extra;
    cout << fixed << setprecision(2) << fee << endl;
    return 0;
}