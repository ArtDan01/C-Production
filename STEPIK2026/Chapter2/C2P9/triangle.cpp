#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    // put your code here
    double a,b,c;
    cin >> a >> b;
    c = sqrt(pow(a,2) + pow(b,2));
    cout << fixed << setprecision(3) << c << endl;
    return 0;
}