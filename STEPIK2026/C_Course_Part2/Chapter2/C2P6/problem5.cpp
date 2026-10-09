#include <iostream>
using namespace std;
#include <typeinfo>
//put your code here

template<typename Var1, typename Var2>
auto division(Var1 a, Var2 b) -> decltype(a / b){
    return (a / b);
}
int main() {
    int a, b;
    double x;
    float z;
    cin >> a >> b;
    cin >> x;
    cin >> z;
    cout << division(a, b) << " " << typeid(division(a, b)).name() << endl;
    cout << division(x, b) << " " << typeid(division(x, b)).name() << endl;
    cout << division(x, z) << " " << typeid(division(x, z)).name() << endl;
    cout << division(z, b) << " " << typeid(division(z, b)).name() << endl;
    return 0;
}