#include <iostream>
using namespace std;
int main() {
    // put your code here
<<<<<<< HEAD
    // int step = 20; int columns = 6;
=======
    /*
    ! Внутренний цикл выполняется полностью на одну итерацию внешнего
    ! значит внешний должен итерироваться по строкам, а внутренний по элементам от 1 до степа
    */
>>>>>>> fa7b24dfeb54f5999c02b4a3c63b8a52e7c4766e
    int step, columns;
    int start = 100;
    cin >> step >> columns;
<<<<<<< HEAD
    for(int j = 100; j <= 999; j){
        for(int i = 1; i <= columns; i++){
            if(j >= 999) break;
            if(i == columns) cout << j;
            else{ cout << j << ' ';}
            
            j+=step;
=======
    for(int i = 1; i <= columns; i++){
        for(int j = start; j <=start +step*columns; j+=step){
            cout << j << ' ';
>>>>>>> fa7b24dfeb54f5999c02b4a3c63b8a52e7c4766e
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
