#include <iostream>
using namespace std;
int main() {
    // put your code here
    int number;
    int min;
    int min_index;
    cin >> min;
    int index = 1;
    min_index = index;
    while(true){
        cin >> number;
        if(number == -1000) break;
        else{
        index++;
        if(number < min){ 
        min = number;
        min_index = index;
        }
    }
        
    }
    cout << min << ' ' << min_index << endl;
    
    return 0;

}