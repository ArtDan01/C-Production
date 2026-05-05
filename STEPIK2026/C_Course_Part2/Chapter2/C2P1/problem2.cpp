#include <iostream>
using namespace std;
//put your code here
void frame(int a, int b){
    for(size_t i = 0; i < b; i++){
        for(size_t j = 0; j < a; j++){
            if(i >= 1 && i <= b - 2){
                if(j >= 1 && j <= a - 2) cout << ' ';
                else cout << '*';
            } else cout << '*';
        }
        cout << endl;
    }
}
int main(){
    int l,h;
    cin >> l >> h;
    if (l <= 0 || h <= 0) return 1;
    frame(l, h);
    return 0;
}