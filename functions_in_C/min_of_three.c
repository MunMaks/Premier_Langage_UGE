#include <stdio.h>

int min_of_three(int a, int b, int c){
    int minimum1, minimum2;
    // In this case I'm using ternary conditional operator.
    // It looks like this:
    // (condition) ? (return if condition true) : (return if condition false)
    minimum1 = (a <= b) ? a : b;  // min fo a and b
    minimum2 = (c <= b) ? c : b;  // min of b and c
    
    return (a <= c) ? minimum1 : minimum2;  // mon of a and c
}

int main(void){
    int a, b, c = -5, 30, 222;
    int res = min_of_three(a, b, c);
    printf("result: %d\n", res);
    return 0;
}
