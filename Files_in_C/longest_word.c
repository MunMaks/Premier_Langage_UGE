#include <stdio.h>
#include <string.h>
#define MAX 256  // it's defined that the biggest word is no more than 255 characters

int len(char *s){
    int i = 0;
    while (s[i] != '\0') ++i;
    return i;
}

int main(int argc, char* argv[]){
    FILE * fptr;
    char mot[MAX];
    char new_word[MAX];
    int len_long_mot = 0;
    int len_word;
    while(*(++argv)){
        fptr = fopen(*argv, "r");  // Ouverture en mode lécture == 'read' 
        if (fptr == NULL){ perror("L'ouverture est échoé, réessayez.\n"); return 1; }  // On n'a pas réussi à lire le fichier
        
        while (fscanf(fptr, " %255s ", new_word) == 1) {  // d'après l'énoncé on a que la longueur soit < 256 
            len_word = len(new_word);       // la longueur de nouveau mot 
            if (len_word > len_long_mot) {  // si la longueur de nouveau mot est plus grande
                strcpy(mot, new_word);      // Changer notre long mot, d'après <string.h>
                len_long_mot = len_word;    // mis à jour de la longueur de nouveau long mot
            }
        } 
        fclose(fptr);  // close file
    }
    //printf("Nombre de lignes du fichier %d", len_long_mot);

    printf("%s\n", mot);  // show the biggest word
    return 0;
}

// I write in english et en français, comme ça si vous lisez mon code, you can understand everything that I write.