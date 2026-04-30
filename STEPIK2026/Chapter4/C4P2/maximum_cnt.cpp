#include <iostream>
using namespace std;
int main() {
    // put your code here
    int number, max;
    int cnt = 1;
    cin >> number;
    if(number == 0){cnt = 0; cout << cnt << endl; return 0;}
    max = number;
    do{
        cin >> number;
        if(number == max) cnt ++;
        if(number > max) {
            max = number;
            cnt = 1;
        }

    } while(number != 0);

    cout << cnt << endl;
    return 0;
}

/*
Вариант преподавателя

#include <iostream>
using namespace std;

int main() {
    int number, max = 0; //поскольку числа неотрицательные, любое будет больше или равно 0
    int count = 0;
    while (true) { //бесконечный цикл
        cin >> number;
        if (number == 0) break;
        if (number > max) {
            max = number;
            count = 1; //один максимум уже есть
            continue; //чтобы избежать следующих проверок, заворачиваем на новую итерацию
        }
        if (number == max) {
            count++;
        }
    }
    cout << count;
    return 0;
}
*/