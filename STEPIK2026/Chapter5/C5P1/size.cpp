#include <iostream>
using namespace std;

int main(){
    int mas[5] = {3, 6, 2};
    cout << sizeof(mas) + mas[1] << ' ';
    cout << sizeof(mas) + sizeof(mas[1]) << endl;;
    return 0;
}