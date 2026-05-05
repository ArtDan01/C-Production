#include <iostream>
using namespace std;
int main() {
    // put your code here
    int input;
    cin >> input;
    switch (input)
    {
    case 10:
        cout << "десять" << endl;
        break;
    case 11:
        cout << "одиннадцать" << endl;
        break;
    case 12:
        cout << "двенадцать" << endl;
        break;
    case 13:
        cout << "тринадцать" << endl;
        break;
    case 14:
        cout << "четырнадцать" << endl;
        break;
    case 15:
        cout << "пятнадцать" << endl;
        break;    
    default:
    cout << "неверное число" << endl;
        break;
    }
    return 0;
}