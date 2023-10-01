#include <stdio.h>

int length (char *word);  // function that return size of string (char*)

int main(int argc, char* argv[]){  // Try: /a.out Test1 TEST2
    int X = 0, Y = 0, Z = 0;  // X - uppercase, Y - lowercase, Z - rest symbols
    while(--argc > 0){
        //printf("%s ", argv[argc]);
        char* word = argv[argc];
        int len_word = length(word);

        for (int i = 0; i < len_word; ++i){
            if (word[i] >= 'A' && word[i] <= 'A' + 26) ++X;  // if word[i] between A-Z so we add to X (uppercase_lettres)

            else if(word[i] >= 'a' && word[i] <= 'a' + 26) ++Y;  // if word[i] between a-z so we add to Y (lowercase_lettres)
            
            else ++Z;  // rest symbols
        }
    }

    printf("Nombre de majuscules : %d\n", X);
    printf("Nombre de minuscules : %d\n", Y);
    printf("Nombre d'autres caractères : %d\n", Z);
    return 0;
}

int length (char *word){
    int count = 0;
    while(word[count] != '\0') ++count;
    return count;
}
