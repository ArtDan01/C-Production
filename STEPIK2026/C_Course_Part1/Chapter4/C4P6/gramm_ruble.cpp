#include <iostream>
using namespace std;
int main() {
    // put your code here
    double price_kg;
    cin >> price_kg;
    double price_g = price_kg / 10;
    int weight = 100;
    cout << "Вес(гр)    Стоимость(руб)" << endl;
    for(int i = 1; i <=10; i++){
        printf("%-3d%s%lf", weight,"    ", price_g);
        // cout << weight << "    " << price_g << endl;
        weight +=100;
        price_g +=100*i;
    }
    return 0;
}