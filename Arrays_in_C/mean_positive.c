#include <stdio.h>

float mean_positive(int* array, int size){
    if (size <= 0) return 0.0;

    float count = 0;
    float mean = 0.0;
    for (int i = 0; i < size; ++i) {
        //if (array[i] == array[i+1]) break;
        if (array[i] >= 0) {
            mean += array[i];
            count++;
        }
    }

    //printf("mean: %f, count : %f\n", mean, count);
    return (mean != 0 && count != 0) ? mean / count  : 0;
}

int main(void){
    int tab[4] = {22, 4, 0, 101};
    float res = mean_positive(tab, 4);
    return 0;
}
