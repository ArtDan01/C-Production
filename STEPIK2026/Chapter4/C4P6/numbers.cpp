#include <iostream>
using namespace std;
int main() {
    // put your code here
    /*
    ! Внутренний цикл выполняется полностью на одну итерацию внешнего
    ! значит внешний должен итерироваться по строкам, а внутренний по элементам от 1 до степа
    */
    int step, columns;
    int start = 100;
    cin >> step >> columns;
    for(int i = 1; i <= columns; i++){
        for(int j = start; j <=start +step*columns; j+=step){
            cout << j << ' ';
        }
        cout << endl;
    }
    return 0;
}
