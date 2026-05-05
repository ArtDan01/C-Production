#include <iostream>
using namespace std;
int main() {
    // put your code here                   логичное решение
    int x;
    cin >> x;
    printf ("%d %d %d %d",((x*1024)/760), (((x*1024)%760)/95), ((((x*1024)%760)%95)/7), (((((x*1024)%760)%95)%7)*1024)/350);
    return 0;
}