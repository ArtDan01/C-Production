#include <iostream>
using namespace std;
int power(int x, int y){
    int power = 1;
    switch (y){
        case 0:
            return 1;
            break;
        case 1:
            return x;
            break;
        default:
        for(size_t i = 0; i < y; i++){
            power *= x;
        }
        return power;
    }
}
int main() {
    // put your code here
    int result;
    for(size_t i = 2; i <= 10; i++){
        result = power(i,3);
        cout << result << ' ';
    }
    cout << endl;
    return 0;
}