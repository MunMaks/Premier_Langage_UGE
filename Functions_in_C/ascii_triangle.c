#include <stdio.h>
    
void ascii_triangle(int n){
    /* n = 5;
    *
    **
    ***
    ****
    *****
    */
    for (int i = 1; i <= n; ++i){
        for (int j = 0; j < i; ++j){
            printf("%c", '*');  // by ASCII's code '*' has code 52
        }
        printf("\n");
    }
}
int main(void){
    int n = 5;
    ascii_triangle(n);
    return 0;
}
