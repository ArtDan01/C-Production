#include <iostream>
using namespace std;
int main() {
    // put your code here
    int n;
    int divided = 0;
    cin >> n;
    for(int i = 2; i <= n; i++){
        divided = 0;
        for (int j = 2; j <= n - 1; j ++){
            if(i % j == 0 && i != j) divided = 1;
        }
        if(!divided) cout << i << ' ';
    }
    return 0;
}

/*
! Пример лаконичного решения нахождения простых чисел
*#include <iostream>
*int main() {
*    int n;
*    std::cin >> n;
*    for (int i=2, j=2; i<=n; i++) {
*        for (; j<i; j++) if (!(i%j)) break;
*        if (i==j) std::cout << i << " ";
*        j=2;
*    }
*    return 0;
*}
*/