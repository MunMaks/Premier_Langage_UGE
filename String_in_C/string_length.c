#include<stdio.h>
// lenght of string without strlen() from #include <string.h> 
int string_length(char* s){
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int main(void){
    char *s = "Hello, World!";
    int len = string_lenght(s);
    printf("the length of %s is %d", s, len);
    return 0;
}
