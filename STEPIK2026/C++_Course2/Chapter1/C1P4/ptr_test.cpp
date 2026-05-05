#include <iostream>
using namespace std;
#define ARRAY_SIZE 10
int main() {
    // put your code here
    int a = 10;
    int * ptr = &a;
    cout << "Значение переменной: " << a << endl;
    cout << "Адрес переменной: " << ptr << endl;
    cout << "Данные по разыменованному адресу переменной: " << *ptr << endl;
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int *aptr = arr;
    cout << "Значение первого элемента массива: " << arr << endl;
    cout << "Адрес первого элемента массива: " << aptr << endl;
    cout << "Данные по разыменованному адресу первого элемента массива: " << *aptr << endl;
    aptr++;
    cout << "Совершен инкремент указателя на массив, данные: " << *aptr << endl;
    cout << "Совершен инкремент указателя В ВЫВОДЕ на массив, данные: " << *aptr++ << endl;
    cout << "Новые данные после инкремента: " << *aptr << endl;
    cout << "Сначала вывод потом инкремент " <<  endl;
    cout << "Вывод следующего элемента, ожидаю 3: " << *(aptr + 1) << endl;
    aptr = arr;
    int * eaptr = &arr[5];
    cout << "Вывод последнего элемента массива: " << *eaptr << endl;
    cout << "Разница указателей указывает количество элементов между ними: " << eaptr - aptr << endl;
    cout << "Всего элементов в массиве: " << sizeof(arr) / sizeof(int) << endl;
    return 0;
}