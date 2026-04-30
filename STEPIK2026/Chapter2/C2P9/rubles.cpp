#include <iostream>
using namespace std;
int main() {
    // put your code here
    int rubles, kopek;
    cin >> rubles >> kopek;
    rubles += kopek / 100;
    kopek > 100 ? kopek = kopek % 100 : kopek;
    printf("%d р. %d к.", rubles, kopek);
    return 0;
}