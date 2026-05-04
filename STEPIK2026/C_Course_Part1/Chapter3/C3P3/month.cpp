#include <iostream>
using namespace std;
int main() {
    // put your code here
    char month;
    cin >> month;
    switch (month){
        case('J'):
            cout << "январь" << endl;
            break;
        case('F'):
            cout << "февраль" << endl;
            break;
        case('D'):
            cout << "декабрь" << endl;
            break;
        default:
            cout << "Ошибка" << endl;
            break;
    }
    return 0;
}