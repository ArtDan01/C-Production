#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // put your code here
    double price_kg;
    cin >> price_kg;
    double price_g = price_kg / 10;
    cout << "Вес(гр)	Стоимость(руб)" << endl;
    for(int n = 0; n < 10; n++){
        cout << fixed << setprecision(2) << 100+n*100 <<'	' << price_g*(n+1) << endl;
    }
    return 0;
}