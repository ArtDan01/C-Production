#include <iostream>
using namespace std;

int main (){
    int x;
    int mask = 1 << 0;   //установлен первый бит  справа
    cin >> x;
    if(x & mask) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}