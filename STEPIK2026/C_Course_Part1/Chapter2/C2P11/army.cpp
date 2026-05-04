#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int mask = 1 << 2;   //установлен третий бит  справа
    char plan;
    cin >> plan;
    char key = '$';
    plan = plan ^ key;

    if(plan&mask)
    printf("%s\n", "Наступаем");

    else printf("%s\n", "Ожидаем");

    return 0;
}