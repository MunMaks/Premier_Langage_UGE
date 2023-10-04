#include <stdio.h>

void miroir(int arr1[], int arr2[], int taille){
    int idx = 0;
    for (int i = taille - 1; i >= 0; --i){
        arr2[idx] = arr1[i]; 
        //printf("arr1[%d] = arr2[%d]\n", arr1[idx], arr2[idx]);
        idx++;
    }
}

int main(void){
    int array_1[4] = {22, 4, 0, 101};
    int array_2[4] = {0, 0, 0, 0};
    int size = 4;
    miroir(array_1, array_2, size);  // we modify second array.
    return 0;
}
