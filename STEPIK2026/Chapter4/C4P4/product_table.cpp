#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // put your code here
    int k;
    cin >> k;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= k; j++){
            // cout << fixed << right << setw(1) << i*j << ' ';
            printf("%-2d ",i*j);
        }
        cout << endl;
    }
    return 0;
}