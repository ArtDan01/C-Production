#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    // put your code here
    double a, b, c;
    cin >> a >> b >> c;

    double l1,l2,l3;
    l1 = 2*M_PI*a;
    l2 = 2*M_PI*b;
    l3 = 2*M_PI*c;
    printf("%7.2lf\n", l1);
    printf("%7.2lf\n", l2);
    printf("%7.2lf\n", l3);
    return 0;
}