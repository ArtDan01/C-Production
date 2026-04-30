#include <iostream>
using namespace std;
int main() {
    // put your code here
    long int number;
    int cnt = 0;
    int sum = 0;
    cin >> number;
    do{
        sum += number % 10;
        number /= 10;
        cnt++;

    }while(number != 0);
    cout << cnt << " " << sum << endl;
    return 0;
}