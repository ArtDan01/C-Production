#include <iostream>
using namespace std;
int main() {
    // put your code here
    int h;
    int space = 0;
    cin >> h;
    for (int i = 1; i <= h; i++){
        space = h - i;
        for (int i = 0; i < space; i++){
            cout << " ";
        }
        for(int i = 0; i < h - space; i++){
        cout << '*';
        }
        cout << endl;
    }
    return 0;
}

/*
!Идеальный вариант кода, мой - говно

#include <iostream>

* int main()
* {
* 	int n;
* 	std::cin >>n; 
* 	for (int i = 1; i <= n; ++i) { // цикл по строкам
* 		for (int j = 1; j <= n; ++j) { цикл по столбцам
* 			std::cout << (j > n - i? "*" : " "); 
* 		}
* 		std::cout << std::endl;
* 	}
* 	return 0;
* }
*/