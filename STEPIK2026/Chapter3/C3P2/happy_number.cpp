#include <iostream>

#define HUNDREDS_THOUSANDS  100000
#define TEN_THOUSANDS       10000
#define THOUSANDS           1000
#define HUNDREDS            100
#define TENS                10

using namespace std;

int main() {
    // put your code here
    int number;
    cin >> number;
    int ones, tens, hundreds, thousands, tens_thousands, hundreds_thousands;
    hundreds_thousands = number / HUNDREDS_THOUSANDS; // right
    tens_thousands = (number / TEN_THOUSANDS) % TENS; 
    thousands = (number / THOUSANDS) % TENS;
    hundreds = (number / HUNDREDS) % TENS;
    tens = (number / TENS) % TENS;
    ones = number % TENS; // right

    if(hundreds_thousands == 0 || hundreds_thousands > 10) {
        printf("%s\n", "ERROR");
    } else {
        if((hundreds_thousands + tens_thousands + thousands) == (hundreds + tens + ones)){
            printf("%s\n", "YES");
        } else printf("%s\n", "NO");
    }
    return 0;
}