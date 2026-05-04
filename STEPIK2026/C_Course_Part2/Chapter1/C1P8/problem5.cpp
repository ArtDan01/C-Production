#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int a[N];
    int* ptr = a;
    for (int i = 0; i < N; i++, ptr++) {
        cin >> *ptr;
    }
    int elem;
    cin >> elem;
    int* ptrLeft = a, * ptrRight = a + N - 1;//указатели на левую и правую границы
    //сортируемой области
    int* ptrFind = nullptr; //указатель на найденный элемент
    while (ptrLeft <= ptrRight) {
        int* ptrMid = ptrLeft + (ptrRight - ptrLeft) / 2;
        if (*ptrMid == elem) {
            ptrFind = ptrMid;
            break;
        }
        if (*ptrMid < elem) {
            ptrLeft = ptrMid + 1;
        }
        if (*ptrMid > elem) {
            ptrRight = ptrMid - 1;
        }
    }
    if (ptrFind == nullptr) {
        cout << "ERROR"; //элемент не найден
    } else {
        while (ptrFind < a + N) {
            cout << *ptrFind << " ";
            ptrFind++;
        }
    }
    return 0;
}
