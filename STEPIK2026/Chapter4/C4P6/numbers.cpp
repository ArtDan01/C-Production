#include <iostream>
using namespace std;
int main() {
    // put your code here
    // int step = 20; int columns = 6;
    int step, columns;
    cin >> step >> columns;
    for(int j = 100; j <= 999; j){
        for(int i = 1; i <= columns; i++){
            if(j >= 999) break;
            if(i == columns) cout << j;
            else{ cout << j << ' ';}
            
            j+=step;
        }
        cout << endl;
    }
    return 0;
}

/* 
! Моё решение конченное и ничего общего с реальностью не имеет, то, что я решил задачу - случайность

Вот пример решения от преподавателя
*#include <iostream>
*using namespace std;
*int main(){
*    int step, stolb;
*    cin >> step >> stolb;
*    int k = 1;
*    for (int i = 100; i <= 999; i += step,k++) {
*        cout << i;
*        if (k % stolb == 0) {
*            cout << '\n';
*        }
*        else {
*            cout << ' ';
*        }
*    }
*    return 0;
*}
*/
