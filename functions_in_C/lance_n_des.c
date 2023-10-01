#include <stdio.h>

int lance_n_des(int val, int n);

int main(void){
    int count = lance_n_des(18, 3);
    printf("count: %d\n", count);
    return 0;
}

int lance_n_des(int val, int n) {
    if (n == 0) return (val == 0) ? 1 : 0;     // Opérateur ternaire
    if (val < 0 || n < 0) { return 0; }        // Si val soit negative ou on n'a plus de dés, ce qui est impossible.
  
    int res = 0;
  
    /* lance n fois dés de 1 à 6*/
    for (int des = 1; des <= 6; ++des) { 
        res += lance_n_des(val - des, n - 1);  // La fonction recursif to count all possible results.
    }
    return res;
}
