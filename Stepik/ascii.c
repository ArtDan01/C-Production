#include <stdio.h>
#include <stdint.h>

int is_whitespace(char c) { return c == ' ' || c == '\t' || c == '\n'; }

int string_count(char* str) {
    int num = 0; 
    int iw = 0;
   while (*str != 0)
   {
    iw = is_whitespace(*str);
    str++; num++;
    if(iw && (*str == 9|| *str == 10)){
        if(num != 0) num--;
    }
    }
   return num;
}

int string_words(char* str)  {
    int words = 0;
    int iw = 0;
    while (*str != 0)
    {
        iw = is_whitespace(*str);
        if((!iw && (*(str+1) == 32||*(str+1) == 0))|| (!iw && (*(str+1) == 9||*(str+1) == 0))||(!iw && (*(str+1) == 10||*(str+1) == 0))) 
        {
            words ++;
        }
        str++;
    }
    return words;
}

int main()
{
    char arr[] = "hello world sueta     \t\t\t      \n\n\n\n  a    aa";
    int count = string_count(arr);
    int words = string_words(arr);
    printf("%s%d\t\n","Char count: ", count);
    printf("%s%d\t\n","Words in strig count: ", words);
    return 0;
}