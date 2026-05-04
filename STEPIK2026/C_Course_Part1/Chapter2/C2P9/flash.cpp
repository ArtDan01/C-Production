#include <iostream>
using namespace std;
int main() {
    // put your code here
    int GB;
    cin >> GB;
    int32_t MB = GB * 1024;
    int films = MB / 760;
    MB -= films * 760;
    int clips = MB / 95;
    MB -= clips * 95;
    int music = MB / 7;
    MB -= music * 7;
    int docs = MB * 1024 / 350;
    MB = MB * 1024 - docs * 1024;
    
    cout << films << " " << clips << " "  << music << " "  << docs << endl;
    return 0;
}