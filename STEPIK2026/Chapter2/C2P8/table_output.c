#include <stdio.h>

int main() {
    // put your code here
    int a;
    scanf ("%o", &a);
    printf("--------------------------------\n");
    printf("| десятичная        |%-10d|\n", a);
    printf("| восьмеричная      |%-10o|\n", a);
    printf("| шестнадцатеричная |%-10x|\n", a);
    printf("--------------------------------\n");
    return 0;
}