#include <stdio.h>
#include <locale.h>

int main(){
    double a, b;
    scanf("%lf%lf", &a, &b);
    double mul = a * b;
    printf("%.3lf",mul);
    return 0;
}