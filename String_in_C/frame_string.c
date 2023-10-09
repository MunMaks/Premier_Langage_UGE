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
    int length = 0;
    while(chaine[length] != '\0'){ ++length; }
    if (!(length)) return;  // if len == 0

    encadree(length);
    printf("# %s #\n", chaine);
    encadree(length);

}
