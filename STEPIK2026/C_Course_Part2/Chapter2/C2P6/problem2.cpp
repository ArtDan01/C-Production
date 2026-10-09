#include <iostream>
using namespace std;
//put your code here
double mySum(double x, double y){
    return x + y;
}
double mySum(int a, int b, int c, int d){
    return double(a) / double(b) + double(c) / double(d);
}

template <typename myType>
myType absMy(myType x){
    myType y = x < 0 ? -x : x;
    return y;
}

int main() {
    double x, y;
    int a, b, c, d;
    cin >> x >> y >> a >> b >> c >> d;
    cout << mySum(x, y) << endl;
    cout << mySum(a, b, c, d) << endl;
    return 0;
}