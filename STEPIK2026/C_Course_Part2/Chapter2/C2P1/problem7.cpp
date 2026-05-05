#include <iostream>
using namespace std;
int nums(int number, double* percentage){
    int count = 0;
    do{
        if(number / 10 != 0){
            number /= 10;
            count++;
        }else{
            if(number % 10 != 0){
                count++;
                break;
            } else break;
        }
    }while(number != 0);
    
    return count;
}
int main() {
    // put your code here
    return 0;
}