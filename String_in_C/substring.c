#include <stdio.h>
int lenght(char *word){
    int i = 0;
    while(word[i] != '\0') ++i;
    return i;
}

int substring(char* big, char* sub) {
    int len = lenght(sub);  // la longeur de substring
    int count = 0;  // si on a (len == count) donc on a trouve notre substring dans big

    for (int i = 0; big[i] != '\0'; ++i){
        if (big[i] == sub[0]) {  // if we got first appearance in string and substring

            for (int j = 0; j < len; ++j){
                if (big[i + j] == sub[j]) { count++; }
                
                else {  // that means current character isn't the same, restart count and move forward.
                    count = 0; 
                    break; 
                }
            }
            // we lenght of substring and total appearance are equal, we found it.
            if (len == count) { return 1; } 
        }
    }
    return 0;
}
