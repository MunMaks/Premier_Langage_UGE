#include <stdio.h>

int est_partie_triee(int* tab){
    // in this case I said from index 4 to 19, both are included.
    for (int i = 4; i < 19; ++i){
        // if there at least one element that doesn't correspond to the condition, so we return 0
        if (tab[i] > tab[i+1]) { return 0; }
    }
    return 1;  // otherwise array is sorted from start (4) to end (19)
}
int main(void){
    int tab[21] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int res = est_partie_triee(tab);
    printf("result: %d\n", res);
    return 0;
}
