#include <stdio.h>
#include <stdint.h>

int main(){
    char a = 'a'; 
    unsigned char a1 = 'a'; 
    signed char F = 'F'; 
    short B = 32700; // 32768
    unsigned short int fst = 65000; //65535
    int C = 2100000000; //2 147 483 647
    unsigned int rec = 4100000000; //4 294 967 295 
    long abc = 123;
    long long ui = 999999999999999999;// +9 223 372 036 854 775 807
    unsigned long long ull= 1800000000000000000;// 18 446 744 073 709 551 615
    float ter = 33.3f;
    double opa = 12312412414.3262;
    long double hel = 123871293761820192;
    //program is done in 4.2s cuz a lot of memory needs

    printf("char a =%c\n", a);
    printf("char a1 =%c\n", a1);
    printf("char F =%c\n", F);
    printf("short B =%hd\n", B);
    printf("unsigned short int fst =%hu\n", fst);
    printf("int C =%d\n", C);
    printf("unsigned int rec =%u\n", rec);
    printf("long abc =%ld\n", abc);
    printf("long long ui =%lld\n", ui);
    printf("unsigned long long ull =%llu\n", ull);
    printf("float ter =%0.5f\n", ter);
    printf("double opa =%20.2lf\n", opa);
    printf("long double hel =%Lf\n", hel);
    //program is done in 0.3s

    return 0;
}