#include <stdio.h>

int puissance (int n, int p){
    if (p < 0) { return 0; }   // if power is negative, so we return 0 
    if (p == 0) { return 1; }  // if power is 0, so we return 1
    int res = 1;
    for (int i = 0; i < p; ++i) { res *= n; }
    return res;
}

int main(void){
    int res = puissance(2, 11);
    printf("result : %d\n", res);
    return 0;
}
