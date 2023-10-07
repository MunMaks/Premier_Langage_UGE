#include <stdio.h>

void encadree(int n){
    for (int i = 0; i < n + 4; ++i) { printf("#"); }
    printf("\n");
}

void frame_string(char *chaine){
    /* it may looks like this:
    ********
    * word *
    ********
    */
    int lenght = 0;
    while(chaine[lenght] != '\0'){ ++lenght; }
    if (!(lenght)) return;  // if len == 0

    encadree(lenght);
    printf("# %s #\n", chaine);
    encadree(lenght);

}
