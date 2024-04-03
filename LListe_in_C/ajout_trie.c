/*
Ajout dans une liste triée.
Écrire une fonction void ajout_trieListe(*lst,int x) 
qui ajoute un élément x à une liste chainée triée (ordre croissant) passée en paramètre.
La liste devra rester trie après l'insertion.

On utilisera les types:
typedef struct cel{  
    int val;   
    struct cel* suivant;  
} Cellule, * Liste;

ainsi que la fonction alloue_Cellule précedemment écrite.
*/
void ajout_trie(Liste *lst, int x)
{
    Cellule *new_node = alloue_Cellule(x);
    if ( !new_node ) { return; }  /* Echec de memoire */

    if ( !(*lst) ) { *lst = new_node; return; }

    Cellule *curr = *lst;
    Cellule *prec = NULL;

    while (curr) {
        if (curr->val >= new_node->val) {
            new_node->suivant = curr;
            if (prec) { prec->suivant = new_node; }
            else      { *lst = new_node; }

            return;
        }
        prec = curr;
        curr = curr->suivant;
    }
    prec->suivant = new_node;
}
