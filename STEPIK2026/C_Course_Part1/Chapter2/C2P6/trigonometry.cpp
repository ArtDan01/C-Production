#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // put your code here
    double a;
    cin >> a;
    double z = 2*pow(sin(3*M_PI - 2*a), 2)*pow(cos(5*M_PI + 2*a), 2);
    double y = (1.0/4.0) - (sin(5*M_PI/2 - 8*a)) / 4;
    cout << z << endl;
    cout << y << endl;
    return 0;
}