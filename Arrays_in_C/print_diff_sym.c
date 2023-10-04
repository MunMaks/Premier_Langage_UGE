#include <stdio.h>

void print_diff_sym(int* array_1, int size_1, int* array_2, int size_2);


int main(void){
    int array_1[] = {1, 3, 5, 7, 9, 11, 13, 14};
    int array_2[] = {0, 1, 5, 6, 8, 11, 15, 16, 17, 18, 19, 20, 21};

    int size_1 = sizeof(array_1) / sizeof(array_1[0]);
    int size_2 = sizeof(array_2) / sizeof(array_2[0]);
    print_diff_sym(array_1, size_1, array_2, size_2);  // we modify second array.
    printf("\n");
    return 0;
}


void print_diff_sym(int* array_1, int size_1, int* array_2, int size_2){
    /*
    int A[] = {1, 3, 5, 7, 9, 11, 13, 14};
    int B[] = {0, 1, 5, 6, 8, 11, 15, 16, 17, 18, 19, 20, 21};
    A diff B : 0 3 6 7 8 9 13 14 15 16 17 18 19 20 21
    */

    int difference[size_1 + size_2];  // we declare difference of two array with size: (size_1 + size_2)
    int first_idx = 0;
    int second_idx = 0;

    int diff_idx = 0;  // max index of difference array 
    int current = 0;   // if one of the array ended after some operations

    for (int i = 0 ; i <= (size_1 + size_2) ; ++i){
        
        if (first_idx == size_1){       // check if first array is done
            if (second_idx < size_2){
                current = second_idx;   // we fix our current where we stopped
                for (int j = 0; j < (size_2 - current); ++j){  // add all numbers left from second array
                    difference[diff_idx] = array_2[second_idx];
                    ++second_idx;
                    ++diff_idx;
                }
            }
            break;  // finish, two indexes reached the end
        }

        if (second_idx == size_2){      // check if second array is done
            if (first_idx < size_1){
                current = first_idx;    // we fix our current where we stopped
                for (int j = 0; j < (size_1 - current); ++j){  // add all numbers left from first array
                    difference[diff_idx] = array_1[first_idx];
                    ++first_idx;
                    ++diff_idx;
                }
            }
            break;  // finish, two indexes reached the end
        }

        if (array_1[first_idx] == array_2[second_idx]) {        // if they are equal we increment the two indices
            ++first_idx;
            ++second_idx;
            continue;
        }

        else if (array_1[first_idx] < array_2[second_idx]){     // if second's array variable is greater than first
            difference[diff_idx] = array_1[first_idx];          // add it to our difference array
            ++first_idx;
            ++diff_idx;
        }
        else if (array_1[first_idx] > array_2[second_idx]){     // if first's array variable is greater than second
            difference[diff_idx] = array_2[second_idx];         // add it to our difference array
            ++second_idx;
            ++diff_idx;
        }

    }
    for (int i = 0; i < diff_idx; ++i){                         // Show all of them
        printf("%d ", difference[i]);
    }
}