#include <iostream>
using namespace std;
#define ROWS 5
#define COLS 5
int main() {
    // put your code here
    int beg = 0;
    int imax = 0;
    int jmax = 0;
    int sum = 0;
    cin >> beg;
    srand(beg);
    int a[ROWS][COLS] = {0};
    for (size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++){
            a[i][j] = rand() % 21;
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }

    for(size_t i = 0; i < ROWS; i++){
        for(size_t j = 0; j < COLS; j++){
            if(a[i][j] >= a[imax][jmax]){
                imax = i;
                jmax = j;
            }
        }
    }
    for(size_t j = 0; j < COLS; j++){
        sum += a[imax][j];
    }
    double average = (double)sum / COLS;
    cout << a[imax][jmax] << ' ' << average << endl;

    return 0;
}