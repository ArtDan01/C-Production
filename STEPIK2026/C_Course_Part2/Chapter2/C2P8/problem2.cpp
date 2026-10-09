#include <iostream>
#include <cstdarg>

template <typename count, typename varType, typename arg>
    double mymax(count cnt, varType type, arg var...){
        arg max = 0;
        switch(type){
            case 'd':
                va_list p;
                va_start(p, var);
                for(count i = 0; i < cnt; i++){
                    var = va_arg(p, int);
                    if(var > max) max = var;
                }
                va_end(p);
                break;
            case 'f':
                va_start(p, var);
                for(count i = 0; i < cnt; i++){
                    var = va_arg(p, double);
                    if(var > max) max = var;
                }
                va_end(p);
                break;
        }
        return max;
    }
int main() {
    std::cout << mymax(5, 'd', 3, 6, 7, -2, 1) << std::endl;
    std::cout << mymax(3, 'f', -2.3, 3.14, 0.72) << std::endl;
    std::cout << mymax(6, 'f', -13., 0.23, 6.6, 4.56, 0.0, -1.1) << std::endl;
    std::cout << mymax(4, 'd', 3, 7, 2, 15);
    return 0;
}