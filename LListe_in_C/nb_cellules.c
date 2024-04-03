/*
Nombre de cellules d'une liste
Ecrire une fonction nb_cellules qui renvoie le nombre d'éléments d'une liste chainée passée en parametre.

On utilisera les types:
typedef struct cel{  
    int val;  
    struct cel* suivant;  
} Cellule, * Liste;
*/

int nb_cellules(Liste l) {
    
    if ( !l ) { return 0; }

    int count = 0;
    while(l){
        l = l->suivant;
        ++count;
    }
    return count;
}
