#include <stdio.h>
// without using strlen() from #include <string.h> 
int len (char word[]){  // returns length of the string (array of character)
    int i = 0;
    while (word[i]) { ++i; }
    return i;
}

void retourne_chaine(char s[]){
    int length = len(s);  // The length of our string
    char miroir[length];  // Miroir with the same lenght than our string 's'
    
    // miroir = l'inverse de notre chaine de caracteres
    for (int i = 0; i < length; ++i){ miroir[i] = s[length - i - 1]; }   // From the end to the 0 index copy of s
    // la mis a jour de notre chaine de caracteres initiale
    for (int i = 0; i < length; ++i){ s[i] = miroir[i]; }                // Modify original string by created 'miroir'
}
