/*
Affiche liste
Ecrire une fonction affiche qui affiche, sur une seule ligne, les éléments d'une liste chainée passée en parametre.
On utilisera les types:
typedef struct cel{  
    int val;  
    struct cel* suivant;  
} Cellule, * Liste;
*/
void affiche(Liste l) {
    if (!l) { printf("\n"); return; }

    while (l){
        printf("%d ", l->val);
        l = l->suivant;
    }
    printf("\n");
}
