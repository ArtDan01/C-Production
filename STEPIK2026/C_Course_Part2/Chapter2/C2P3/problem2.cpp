#include<iostream>
using namespace std;
#include <iomanip>
//put your code here
double parallelepiped(double &a, double &b, double &c, double& volume){
    double square = 2 * (a * c + c * b + a * b);
    volume = a * b * c;
    return square;
}
int main() {
	double a, b, c, square, volume;
	cin >> a >> b >> c;
	square = parallelepiped(a, b, c, volume);
	cout << fixed << setprecision(2) << square << " " << volume;
	return 0;
}