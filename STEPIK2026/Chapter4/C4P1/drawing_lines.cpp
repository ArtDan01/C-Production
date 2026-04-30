#include <iostream>
using namespace std;
int main() {
    // put your code here
    int type, nums;
    char symbol;
    cin >> type >> nums >> symbol;
    switch (type){
        case 1:
            for(int i = 0; i < nums; i++){
                cout << symbol << endl;
            }
            break;
        case 2:
            for(int i = 0; i < nums; i++){
                cout << symbol;
            }
            break;
        default:
        cout << "ERROR" << endl;
    }
    if(nums < 0) cout << "ERROR" << endl;
    return 0;
}