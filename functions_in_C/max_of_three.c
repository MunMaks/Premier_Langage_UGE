#include <stdio.h>

int max_of_three(int a, int b, int c){
    int max1, max2;
    // in this case I'm using ternary operator.
    // It looks like this:
    // (condition) ? (return if condition true) : (return if condition false)
    max1 = (a >= b) ? a : b;  // max fo a and b
    max2 = (c >= b) ? c : b;  // max of b and c
    
    return (a >= c) ? max1 : max2;  // max of a and c
}

int main(void){
    int a, b, c = -5, 30, 222;
    int res = max_of_three(a, b, c);
    printf("result: %d\n", res);
    return 0;
}
