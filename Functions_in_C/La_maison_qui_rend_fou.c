#include <stdio.h>

void maison(int n);

int main(void){
    int n = 3;
    maison(n);
    return 0;
}

void maison(int n) {
    /* n = 3;
      /\
     /  \
    /    \___
    |        |
    |        |
    |________|
    */
    if (n < 1) {
        printf("N est negative, réessayer N >= 1.\n");
        return; 
    }

    // Le toit
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) { printf(" "); }    // espace à gauche du toit
        
        printf("/");
        
        for (int j = 0; j < 2 * i; ++j) { printf(" "); }        // espace à l'intérieur du toit

        if (i != n - 1){ printf("\\\n"); }                      // nouvelle ligne si ce n'est pas la partie plate du toit
        
        else { 
            printf("\\");
            for (int idx = 0; idx < n; ++idx){ printf("_"); }   // La partie plate du toit à n underscores
        }
    }
    printf("\n");
    
    // les murs et le sol
    for (int i = 0; i < n; i++) {
        printf("|");  // le mur gauche
        for (int j = 0; j < (1 + 3 * (n-1)); j++) {
            if (i != n - 1) { printf(" "); }      // espace entre murs
            else { printf("_"); }                 //  le sol
        }
        printf("|\n");
    }
}
