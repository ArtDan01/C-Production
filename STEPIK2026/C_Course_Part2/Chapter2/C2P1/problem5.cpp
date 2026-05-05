#include<iostream>
using namespace std;
#include <iomanip>
//put your code here
void usred(double* x, double* y){
    double average = (*x + *y) / 2;
    *x = average;
    *y = average;
}
int main() {
    double x, y;
    cin >> x >> y;
    usred(&x,&y);
    cout << fixed << setprecision(1) << x << " " << y;
    return 0;
}