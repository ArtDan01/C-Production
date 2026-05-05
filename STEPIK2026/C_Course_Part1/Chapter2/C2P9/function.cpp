#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    // put your code here
    double x;
    cin >> x;
    double y = pow(cos(x), 2) + pow(pow(cos(x), 2), 2) / 2;

    printf("%.3lf", y);
    return 0;
}