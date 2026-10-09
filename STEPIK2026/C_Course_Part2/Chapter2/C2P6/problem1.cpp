#include <iostream>
using namespace std;
//put your code here
double myArea(double x){
    return x * x;
}
double myArea(double y, double z){
    return y * z;
}
int main(){
    double x, y, z;
	cin >> x >> y >> z;
	cout << myArea(x) << " " << myArea(y, z);
    return 0;
}