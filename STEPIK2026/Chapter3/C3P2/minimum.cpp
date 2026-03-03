#include <iostream>
using namespace std;
int main() {
    // put your code here
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int minimum = a;
    if(b < minimum) minimum = b;
    if(c < minimum) minimum = c;
    if(d < minimum) minimum = d;
    if(e < minimum) minimum = e;
    cout << minimum << endl;
    return 0;
}