#include <stdio.h>
int string_length(char* s){
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int est_palindrome(char s[]){
    int len = string_length(s);  // the lenght of string
    int half = len / 2;          // half of the lenght

    for (int i = 0; i < half; ++i){
        if (s[i] != s[len-i-1]) { return 0; }  // check if (first, len-1), (second, len-2) etc
    }
    return 1;
}
