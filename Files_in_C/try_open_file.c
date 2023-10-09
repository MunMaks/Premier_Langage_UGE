#include <stdio.h>
/*
In this problem we have argc-1 files that we want to open, if we can open we print message that we opened file.
Otherwise we should print message that we couldn't open file.
*/
int main(int argc, char* argv[]){
    FILE* fptr;

    while(*(++argv)){  // argc-1 files
        fptr = fopen(*argv, "r");

        if (fptr == NULL){
            printf("L'ouverture du fichier %s a échouée.\n", *argv);
            continue;
            }
        else {
            printf("Le fichier %s a bien été ouvert.\n", *argv);
        }
        fclose(fptr);
    }
    return 0;
}