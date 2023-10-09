#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE* fptr;
    int c;
    while(*++argv){

        fptr = fopen(*argv, "r");    // ouverture de fichier au mode de lécture

        if (fptr == NULL) {
            printf("Failed to open file, %s\n", *argv);
            continue;
        }
        
        while ((c = fgetc(fptr)) != EOF) {
            putchar(c);
        }
        fclose(fptr);
    }
    return 0;
}