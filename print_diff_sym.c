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
    int array_1[] = {1, 3, 5, 7, 9, 11, 13, 14};
    int array_2[] = {0, 1, 5, 6, 8, 11, 15, 16, 17, 18, 19, 20, 21};

    int size_1 = sizeof(array_1) / sizeof(array_1[0]);
    int size_2 = sizeof(array_2) / sizeof(array_2[0]);
    print_diff_sym(array_1, size_1, array_2, size_2);  // we modify second array.
    return 0;
}

void print_diff_sym(int* arr1, int size1, int* arr2, int size2){
    /*
    int A[] = {1, 3, 5, 7, 9, 11, 13, 14};
    int B[] = {0, 1, 5, 6, 8, 11, 15, 16, 17, 18, 19, 20, 21};
    A diff B : 0 3 6 7 8 9 13 14 15 16 17 18 19 20 21
    */

    int difference[size1 + size2];
    int i1 = 0;
    int i2 = 0;
    int diff_idx = 0;
    int fixed_idx = 0;

    for (int i = 0; i <= size1 + size2; ++i){
        
        if (i1 == size1){
            if (i2 < size2){
                fixed_idx = i2;
                for (int idx = 0; idx < (size2 - fixed_idx); ++idx){
                    difference[diff_idx] = arr2[i2];
                    ++i2;
                    ++diff_idx;
                }
            }
            break;
        }

        if (i2 == size2){
            if (i1 < size1){
                fixed_idx = i1;
                for (int idx = 0; idx < (size1 - fixed_idx); ++idx){
                    difference[diff_idx] = arr1[i1];
                    ++i1;
                    ++diff_idx;
                }
            }
            break;
        }

        if (arr1[i1] == arr2[i2]) { //  && (i1 != size1 || i2 != size2) 
            ++i1;
            ++i2;
            continue;
        }

        else if (arr1[i1] < arr2[i2]){
            difference[diff_idx] = arr1[i1];
            ++i1;
            ++diff_idx;
        }
        else if (arr1[i1] > arr2[i2]){
            difference[diff_idx] = arr2[i2];
            ++i2;
            ++diff_idx;
        }

    }
    for (int i = 0; i < diff_idx; ++i){
        printf("%d ", difference[i]);
    }
}