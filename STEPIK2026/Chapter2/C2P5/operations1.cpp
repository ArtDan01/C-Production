#include <iostream>
using namespace std;
int main() {
    // put your code here
    int a;
    int tens, ones;
    cout << " Введите целое неотрицательное число " << endl;
    cin >> a;
    tens = a / 10;
    ones = a % 10;
    cout << ones << endl;
    cout << tens << endl;
    return 0;
}