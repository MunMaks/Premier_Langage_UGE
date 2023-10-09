#include <stdio.h>

void cube_it(int *x){  // By adress and we don't return anything.
    (*x) = (*x) * (*x) * (*x);
}

int main(void){
    int x = 3;
    cube_it(&x);
    return 0;
}
