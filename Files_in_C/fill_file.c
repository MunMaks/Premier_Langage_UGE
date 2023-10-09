#include <stdio.h>

/*
This problem asks us to write a function that will write some sequence of characters in file 'times' times.
If times is 0, so we have nothing to do.
*/

void fill_file(FILE* f, char* s, int times){  //FILE* f = fopen('file.txt', "w");

    if (f == NULL) { perror("Échoé d'ouvrir le fichier\n"); return; }  // if we can't open file we return it right now

    // Version 1
    // for (int i = 0; i < times; ++i)
    //    fprintf(f, "%s\n", s);    // Ça ajoute notre chaine de caractère.
    
    // Version 2
    while(times){
        // Ça ajoute notre chaine de caractère mais caractère par caractère.
        for(int i = 0; s[i] != '\0'; ++i) { fputc(s[i], f); }

        fputc('\n', f);    // Nouvelle ligne.
        --times;           // On diminue la variable 'times'.
    }
    //fclose(f);
}