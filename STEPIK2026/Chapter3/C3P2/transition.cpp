#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // put your code here
    double CM_TO_INCH = 2.54L;

    int operation;
    double distance;
    cin >> operation >> distance;
    if(operation == 1){
        distance *= CM_TO_INCH;
        cout << fixed << setprecision(2) << distance << endl;
    }
    else{
        distance /= CM_TO_INCH;
        cout << fixed << setprecision(2) << distance << endl;
    }
    return 0;
}