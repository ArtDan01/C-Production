#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    // put your code here
    double x;
    cin >> x;
    double y = sin(x);
    if(x >= 5) y = pow(log10(2*x), 2);
    if(x < -2) y = 2* pow(x, 2);

    cout << fixed << setprecision(2) << y << endl;
    return 0;
}