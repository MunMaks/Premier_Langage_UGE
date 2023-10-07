#include <stdio.h>
short int valid_int_char(char ch){  // Here I wanted to play with data types that need half of int memory (2 bytes)
    short int res = ( (ch >= '0' && ch <= '9') || (ch >= '-' && ch <= '-') ) ? 1 : 0 ;
    return res;  // si char est entre '0' est '9' donc c'est un nombre
}

int is_a_number(char* s){
    for (int i = 0; s[i] != '\0'; ++i) {  // going till the end
        if ( !(valid_int_char(s[i])) ) { return 0; }  // if this number is not valid integer or '-'
    }
    // so this string contains only numbers '0 - 9' and/or '-' character 
    return 1;
}
