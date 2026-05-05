#include <iostream> 
using namespace std;

int main (){
    unsigned char num;
    cin >> num;
    num = ~num;
    cout << dec <<  num << endl;
    return 0;
}