#include <iostream>
using namespace std;
int main() {
    // put your code here
    int start = 100;
    int step, columns;
    cin >> step >> columns;
    int lines = 900 / (step * columns);
    if(900 % (step * columns != 0)) lines ++;
    for(int i = 1; i <= lines; i++){
        for(int j = 1; j <= columns; j++){
            cout << start << ' ';
            start += step;
        }
        cout << endl;
    }
    return 0;
}
