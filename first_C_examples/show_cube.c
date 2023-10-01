#include <stdio.h>
void display_info(int nb, int cube){ printf("Le cube du nombre %d est le nombre %d.\n", nb, cube); }

int calculate_cube(int nb){ return nb * nb * nb; }

void show_cube(int n){
    int cube = calculate_cube(n);
    display_info(n, cube);
}
