#include <iostream>
using namespace std;
int main() {
    // put your code here
    double product = 1;
    int start;
    int end;
    cin >> start >> end;
    if(start == end) {
        if(start % 2 == 0) {
            product = 0;
            cout << product << endl;
            return 0;
        }
        product = start;
        cout << product << endl;
        return 0;
    } 
    if(start > end){
        if(start % 2 == 0){
            start--;
        }
        while(start >= end){
            product *= start;
            start -= 2;
        }
    }
    else{
        if(start % 2 == 0){
            start++;
        }
        while (start <= end){
            product *= start;
            start += 2;
        }
    }
    cout << product << endl;
    return 0;
}