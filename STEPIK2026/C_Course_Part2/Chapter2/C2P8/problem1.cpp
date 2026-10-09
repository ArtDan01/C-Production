#include <iostream>
#include "stdarg.h"
using namespace std;
//put your code here
double average(int cnt, int a, ...) {
	double sum = 0;
	va_list p; //объявляем указатель нa параметр
	va_start(p, a); //устанавливаем этот указатель после явного параметра a    
    for(size_t i = 0; i < cnt; i++){
		sum += a; 
		a = va_arg(p, int); //считываем параметр и переходим к следующему 
    }
	va_end(p);
	return double(sum / cnt);
}
int main() {
    cout << average(3, 5, 7, 12) << " " << average(5, 1, 8, 3, 2, -5);
    return 0;
}