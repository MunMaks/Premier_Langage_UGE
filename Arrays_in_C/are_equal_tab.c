#include <stdio.h>

int are_equal_tab(int tab1[], int tab2[], int size){
    for (int i = 0; i < size; ++i){
        if (tab1[i] != tab2[i]) { return 0; }  // if at least one element doesn't correspond, so we return 0 
    }
    return 1;  // otherwise they're equal.
}

int main(void) {
    int tab_1[5] = {1, 2, 3, 4, 5};
    int tab_2[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int res = are_equal_tab(tab_1, tab_2, size);
    printf("result :%d\n", res);
    return 0;
}
