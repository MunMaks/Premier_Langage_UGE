#include <stdio.h>

void shiftLR(int a[], int b[], int size){
    // a = {1, 2, 3, 4}, b = {1, 2, 3, 4}   // right
    // a = {4, 1, 2, 3}, b = {2, 3, 4, 1}   // left
    if (size <= 0) {return;}

    int last_val_a = a[size-1];
    int first_val_b = b[0];
    for (int i = size-1; i > 0; --i){       // We start from last element till first
        a[i] = a[i - 1];
    }    

    for (int i = 0; i < size - 1; ++i)  {   // We start from first element till SIZE - 1
        b[i] = b[i + 1];    
    }
    a[0] = last_val_a;          // We change last val in a that we saved before.
    b[size-1] = first_val_b;    // We change first val in b that we saved before.
}

int main(void){
    int array_1[4] = {1, 2, 3, 4};
    int array_2[4] = {1, 2, 3, 4};
    int size = 4;
    shiftLR(array_1, array_2, size);  // we modify second array.
    return 0;
}
