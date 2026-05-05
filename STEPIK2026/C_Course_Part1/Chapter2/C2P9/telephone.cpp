#include <iostream>
using namespace std;
int main() {
    // put your code here
    int start_h, start_m, start_s, stop_h, stop_m, stop_s;
    char a,b,c,d;
    cin >> start_h >> a >> start_m >> b >> start_s >>  stop_h >> c >> stop_m >> d >> stop_s;

    int spent_h, spent_m, spent_s;

    start_s <= stop_s ? spent_s = stop_s - start_s : spent_s = 60 - start_s + stop_s;
    start_m <= stop_m ? spent_m = stop_m - start_m : spent_m = 60 - start_m + stop_m;
    start_s <= stop_s ? spent_m : spent_m--;
    start_h <= stop_h ? spent_h = stop_h - start_h : spent_h = 24 - start_h + stop_h;
    start_m <= stop_m ? spent_h : spent_h--;

    spent_s != 0 ? spent_m++ : spent_m;
    int spent_time = spent_h * 60 + spent_m;

    double cost = (double)spent_time * 0.07L;

    cout << cost << endl;
    return 0;
}