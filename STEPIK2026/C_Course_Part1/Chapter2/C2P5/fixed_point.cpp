#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    // put your code here
    double a, b, c;
    double sum, mul, mid;

    cin >> a >> b >> c;

    sum = a+b+c;
    mul = a*b*c;
    mid = (a+b+c)/3;

    cout << fixed << setprecision(3) << sum << endl;
    cout << fixed << setprecision(3) << mul << endl;
    cout << fixed << setprecision(3) << mid << endl;
    return 0;
}