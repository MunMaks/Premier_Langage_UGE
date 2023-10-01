#include <stdio.h>

double polynome(int a, int b, int c) {  // This function return result from this polynome in type "double" 
    // (a - 3)(b^2 + 2)(c - 8)
    double res = (a - 3) * ((b*b) + 2) * (c - 8);
    return res;
}

int main(void){
    int a = 2, b = 4, c = 6;
    double result = polynome(a, b, c);
    printf("result: %lf", result);  // %f - float, %f or %ld for doulbe
    return 0;
}
