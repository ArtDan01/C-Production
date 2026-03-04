#include <iostream>
using namespace std;
int main() {
    // put your code here
    double speed_kmh, speed_ms;
    cin >> speed_kmh >> speed_ms;
    if (speed_kmh < 0 || speed_ms < 0) {
        cout << "Ошибка" << endl;
        return 0;
    }
    if(speed_kmh > speed_ms * 3.6){
        cout << "Больше" << endl;
        return 0;
    }
    if(speed_kmh < speed_ms * 3.6){
        cout << "Меньше" << endl;
    }
    if(speed_kmh == speed_ms * 3.6){
        cout << "Равны" << endl;
    }
    
    return 0;
}