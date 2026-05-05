#include <iostream>
using namespace std;
int main() {
    int distance, minutes, seconds;
    char c;
    cin >> distance >> minutes >> c >> seconds;
    int time = minutes * 60 + seconds;
    double speed = ((double)distance / time) * 3.6L;
    printf("%.2lf\n", speed);
    // put your code here
    return 0;
}