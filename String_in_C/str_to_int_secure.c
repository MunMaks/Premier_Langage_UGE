#include <stdio.h>
// without using string, atoi, strtol
int valid_integer(char ch){
    int res = (ch >= '0' && ch <= '9') ? 1 : 0 ;
    return res;  // si char est entre '0' est '9' donc c'est un nombre
}

int value_from_char (char ch){
    int i = 0;
    for (i = 0; i < 10; ++i)
        if (ch == ('0' + i)) { break; }  // ASCII's code of '0' is 48
    return i;
}

int str_to_int_secure(char* s, int* val){
    int count = 0;
    int negative = 0;
    for (int i = 0; s[i] != '\0'; ++i){
        if (s[i] == '-') {  // comparer ASCII code autrement dit (45 == 45)
                ++negative;
                continue;
        }
        if ( valid_integer(s[i]) ) {count = count * 10 + value_from_char(s[i]); }

        else { return 0; }
    }
    if (negative) { count *= (-1); }
    *val = count;
    return 1;
}
