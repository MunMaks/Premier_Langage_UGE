#include <stdio.h>

void incremente(int *p, int inc){
    *p += inc;
}

int main(void) {
    int number = 5;
    int increment = 10;
    // &number because we change the original value by sending a variable to its address
    incremente(&number, increment);  // number is now 15
    return 0;
}
