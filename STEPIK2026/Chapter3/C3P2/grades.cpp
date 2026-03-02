#include <iostream>
using namespace std;
int main() {
    // put your code here
    int a,b,c,d,e;
    double average;
    bool in_range = true;
    cin >> a >> b >> c >> d >> e;
    if (a > 10 || b > 10 || c > 10 || d > 10 || e > 10) {
        printf("%s", "Оценка выше диапазона, выход ...");
        in_range = false;
    }
    if(in_range){
        average = (a+b+c+d+e) / 5.00l;
        if(average > 4) printf ("%s\n", "YES");
        else printf("%s", "NO");
    }
    return 0;
}