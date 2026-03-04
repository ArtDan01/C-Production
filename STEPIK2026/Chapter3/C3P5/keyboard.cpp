#include <iostream>
using namespace std;
int main() {
    // put your code here
    char input;
    cin >> input;
    switch (input)
    {
    case '+':
        cout << "Сложение" << endl;
        break;
    case '-':
        cout << "Вычитание" << endl;
        break;
    case '*':
        cout << "Умножение" << endl;
        break;
    case '/':
        cout << "Деление" << endl;
        break;
    
    default:
    cout << "Неизвестная операция" << endl;
        break;
    }
    return 0;
}