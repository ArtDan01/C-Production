#include <iostream>
#include <iomanip>
using namespace std;

double max(double x, double y, double z){

    double max = x;
    if (y > max) max = y;
    if (z > max) max = z;

    return max;
}

double min(double x, double y, double z){

    double min = x;
    if (y < min) min = y;
    if (z < min) min = z;
    
    return min;
}

int main() {
    // put your code here
    double x, y ,z;
    cin >> x >> y >> z;
    if(x == 0 || y == 0|| z == 0){
        cout << "Division by zero!" << endl;
        return 0;
    }
    double m = max(x,y,z) / min(x,y) + 5;
    cout << fixed << setprecision(2) << m << endl;
    return 0;
}