#include <iostream>
using namespace std;
int main() {
    // put your code here 
    int width;
    cin >> width;
    int probel = 0;
    int zvezd = width;
    while( zvezd > 0) { //нужно еще выводить звезды
    for(int i = 0; i < probel; i ++){cout << ' ';}//вывести пробелов в количестве probel штук
    for(int i = 0; i < zvezd; i ++){cout << '*';}//вывести звезды в количестве zvezd штук
    probel++;
    zvezd -= 2; // готовимся к следующей строке
    cout << endl;
}
    return 0;

}