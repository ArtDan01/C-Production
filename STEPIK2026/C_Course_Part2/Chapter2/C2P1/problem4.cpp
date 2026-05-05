#include<iostream>
using namespace std;
#include <iomanip>
//put your code here
void largerOf(double* x, double* y){
    if(*x > *y) *y = *x;
    else *x = *y;
}
int main() {
    double x, y;
    cin >> x >> y;
    largerOf(&x, &y);
    cout << fixed << setprecision(2) << x  << " " << y << endl;
    return 0;
}