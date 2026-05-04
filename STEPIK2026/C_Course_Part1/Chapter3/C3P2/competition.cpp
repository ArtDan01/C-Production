#include <iostream>
using namespace std;
int main() {
    // put your code here
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    if(((a + b) / 2.0) > (c + d + e + f) / 4.0) {
        if (((a + b) / 2.0) == (c + d + e + f) / 4.0){
            printf("%s\n", "Draw");
        }
        printf("%s\n", "First");
    } 
    else if (((a + b) / 2.0) == (c + d + e + f) / 4.0) printf("%s\n", "Draw");
    else printf("%s\n", "Second");
    
    return 0;
}