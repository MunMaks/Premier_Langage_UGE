#include <stdio.h>

int max_tab(int tab[], int size){
    if (size <= 0) return -1;
    int maximum = 0;
  
    for (int i = 0; i < size; ++i){
        if (tab[i] > maximum) { maximum = tab[i]; }
    }
    return maximum;  // maximum element from array
}

int main(void){
    int tab[4] = {22, -4, 0, 101};
    int res = max_tab(tab, 4);
    return 0;
}
