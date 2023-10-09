#include <stdio.h>
#include <ctype.h>     // pour utiliser islower(char c)

void letter_file(FILE* f) {
    if (f == NULL) { perror("Failed to open file.\n"); return; }
    int alphabet[26] = {0};    // where alphabet[0] is 'a' and alphabet[25] is 'z'
    int c;   // to check what character it is
    float total = 0.0;
    while ((c = fgetc(f)) != EOF) {
        if (islower(c)){    // pareil:  if (c >= 'a' && c <= 'z')
            alphabet[c - 'a']++;  // c - 'a' gives us a value from 0 to 25 that correspond to our alphabet
            total++;        // total lowercase character in our file
        }
    }

    for (int i = 0; i < 26; ++i) {  // going from 0 to 25
        if (alphabet[i]) {          // "%c: %5.2f%%\n" from the description of problem
            printf("%c: %5.2f%%\n", 'a' + i, (alphabet[i] / total) * 100.0 );  // to see the usage percentage of each symbol
        }
    }
    //fclose(f);  // we don't need to close file, because we close it in main
}