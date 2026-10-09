#include <iostream>
using namespace std;
//put your code here
int sumOfNumbers(int number){
    int sum = 0;
    if (number < 0) number *= -1;
    for(; number > 0; number /= 10){
        sum += number % 10;
    }
    return sum;
}
int main() {
    int value;
    for (int i = 0; i < 5; i++) {
        cin >> value;
        cout << sumOfNumbers(value) << " ";
    }
    return 0;
} //-356 89 1278 -2 0