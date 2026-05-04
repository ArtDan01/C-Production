#include <iostream>
using namespace std;
int main() {
    // put your code here
    int input;
    cin >> input;

    int sum = 0;
    int index = 1;
    int divided = 0;

    while (input != 0){
        cin >> input;
        index++;
        for(int j = 2; j < index; j++){
            if(index % j == 0){
                divided = 1;
                break;
            }
            else{divided = 0; continue;}
        }
        if(!divided) sum += input;
    }
    cout << sum << endl;
    return 0;
}