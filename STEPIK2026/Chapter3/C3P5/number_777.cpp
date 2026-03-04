#include <iostream>
using namespace std;
int main() {
    // put your code here
    int input;
    cin >> input;
    int cents, decades, ones;
    cents = input / 100; 
    decades = (input / 10) % 10;
    ones = input % 10;

    if (input >= 1000 || input < 100) {
        cout << "ERROR" << endl;
        return 0;
    }
    if(cents == decades && decades == ones) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

/* Идеальный вариант исполнения: тернарный оператор прямо в выводе 
Также используется элементарная логика: если в числе 3 одинаковых цифры - значит
остаток от деления на минимально удовлетворяющее условию (трехзначное) число 111 - 0

#include <iostream>
using namespace std;
int main() {
    int number;
    cin >> number;
    if (number >= 100 && number <= 999)
        cout << (number % 111 == 0 ? "YES" : "NO");        
    else
        cout << "ERROR";
    return 0;
}
    Гениально лаконично
*/