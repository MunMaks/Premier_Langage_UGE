#include <stdio.h>
void str_merge(char s1[], char s2[], char result[]){
    int i, j;
    for (i = 0; s1[i] != '\0'; ++i) { result[i] = s1[i]; }
    for (j = 0; s2[j] != '\0'; ++j) { result[i + j] = s2[j]; }
    result[i + j] = '\0';
}
