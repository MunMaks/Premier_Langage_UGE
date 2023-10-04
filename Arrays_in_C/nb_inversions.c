#include <stdio.h>

int nb_inversions(int t[], int taille){
    // {3, 1, 2} = (0, 1), (0, 2) = return 2
    // {1, 3, 2, 0} = (0, 3), (1, 2), (1, 3), (2, 3) = return 4
    int count = 0;
    for (int i = 0; i < taille-1; ++i) {
        for (int j = i + 1; j < taille; ++j) {
            if (t[i] > t[j]){
                //printf("t[i]-%d , t[j]-%d\n", t[i], t[j]);
                ++count;
            }
        }
    }
    return count;
}

int main(void){
    int array_1[4] = {1, 3, 2, 0};
    int size = 4;
    int res = nb_inversions(array_1, size);  // we modify second array.
    return 0;
}
