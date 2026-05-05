#include<iostream>
using namespace std;
#include <iomanip>
#include <cmath>
//put your code here
double circle(double r, double* length){
    double square = M_PI * pow(r,2);
    *length = 2 * M_PI * r;
    return square;
}
int main() {
    double r, square, length;
    cin >> r;
    square = circle(r, &length);
    cout << fixed << setprecision(2) << square << " " << length << endl;
    return 0;
}