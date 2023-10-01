#include <stdio.h>

void display_1(void){ printf("Trois personnes sont donc dans la file d'attente.\n"); }

void display_2(void){ printf("La file d'attente est vide.\n"); }

void display_3(void){ printf("Une personne arrive et s'insere dans la file d'attente.\n"); }

void fonction_pouet(void){
    display_2();
    display_3();
    display_3();
    display_3();
    display_1();
}

int main(int argc, char* argv[]){
    fonction_pouet();
    return 0;
}
