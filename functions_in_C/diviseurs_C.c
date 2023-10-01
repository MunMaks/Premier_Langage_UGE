#include <stdio.h>

int diviseurs(int number) {
    /*
    number 12:
    1, 2, 3, 4, 6, 12
    number 12 has 6 dividers
    */
    if (number <= 0) return -1;  // if number is negative or zero, so we return -1
    int count = 0;
    for (int i = 1; i <= number; ++i){
        if ((number % i) == 0){
            printf("%d\n", i);
            ++count;
        }
    }
    //printf("%d a %d diviseurs\n", number, count);
    return count;
}

int main(void){
    int res = diviseurs(2, 11);
    printf("result : %d\n", res);
    return 0;
}
