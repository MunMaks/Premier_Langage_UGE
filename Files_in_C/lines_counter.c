#include <stdio.h>

int main(int argc, char* argv[]){
    FILE* fptr;        // file's pointer
    char line[1024];   // to be sure, we have enough space for each line
    int row = 0;
    while(*(++argv)){  // we are going to all files that we get
        fptr = fopen(*argv, "r");  // read mode

        if (fptr == NULL){ perror("Ouverture échoé\n"); continue;}  // check if file is opened
        // Count numbers of row
        else {
            while (fgets(line, sizeof(line), fptr) != NULL) { ++row; }  // fgets == fgetstring, fgetc == fgetchar
        }
        fclose(fptr);  // close current file
    }
    printf("Nombre de lignes du fichier : %d\n", row);
}