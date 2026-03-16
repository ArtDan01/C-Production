#include <iostream>
using namespace std;
/*
! Решить!!!
*/
int main() {
    // put your code here
    int local_max;
    cin >> local_max;
    int max_sum = 0;
    int tmp = local_max;
    if(local_max < 10){
        max_sum = local_max;
    } else {
        while(true){
            max_sum += local_max % 10;
            local_max /= 10;
            if(local_max / 10 == 0){
                max_sum += local_max;
                local_max = tmp;
                break;
            }
        }
    }
    int number;
    int sum;
    int loc_tmp;
    while(number != 0){
        sum = 0;
        cin >> number;
        loc_tmp = number;
        if(number < 10){
        sum = number;
    } else {
        while(true){
            sum += number % 10;
            number /= 10;
            if(number / 10 == 0){
                sum += number;
                break;
            }
        }
    }
    if(sum > max_sum){
        max_sum = sum;
        local_max = loc_tmp;
    }
    }
    cout << local_max << ' ' << max_sum << endl; 
    return 0;
}