#include <stdio.h>
// without using strlen() from #include <string.h> 
int len (char word[]){  // returns lenght of the string (array of character)
    int i = 0;
    while (word[i]) { ++i; }
    return i;
}

void retourne_chaine(char s[]){
    int lenght = len(s);  // The lenght of our string
    char miroir[lenght];  // Miroir with the same lenght than our string 's'
    
    // miroir = l'inverse de notre chaine de caracteres
    for (int i = 0; i < lenght; ++i){ miroir[i] = s[lenght - i - 1]; }   // From the end to the 0 index copy of s
    // la mis a jour de notre chaine de caracteres initiale
    for (int i = 0; i < lenght; ++i){ s[i] = miroir[i]; }                // Modify original string by created 'miroir'
}
