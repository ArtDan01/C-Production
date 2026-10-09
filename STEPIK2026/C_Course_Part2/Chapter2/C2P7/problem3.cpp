#include <iomanip>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double deposit(double P, double r, int n){

    return P * pow((1 + r / 100), n);
}
int main() {
   //put your code here
   int P, r, n;
   cin >> P >> r >> n;
   cout << fixed << setprecision(2) << deposit(P, r, n) << endl;
   return 0;
}