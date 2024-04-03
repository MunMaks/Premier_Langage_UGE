/*
Mélange de deux listes
Écrire une fonction void melange(Liste* un,Liste* deux,int n)qui reçoit deux listes et un entier n.
Elle mélange les deux listes en alternants un élément de l'une et un élément de l'autre.
Si l'entier n vaut 0 le premier élément provient la première liste. 
Si l'entier n vaut 1 le premier élément provient la deuxième liste.
Après le mélange la première liste contient tous les éléments (mélangés) et la deuxième est vide. 
S'il reste des éléments dans une seule des listes, is sont ajoutés sans changement.

Exemple : Si l1=3->5->7->fin et lst=10->8->6->4->2->0->fin , après mélange(&l1,&lst,1) on doit avoir l1=10->3->8->5->6->7->4->2->0->fin et lst=fin

On utilisera les types:
typedef struct cel{  
    int val;   
    struct cel* suivant;  
} Cellule, * Liste;
*/

void melange(Liste* un, Liste* deux, int n)
{
    if (! (*un) ) {     /* si un est vide, changer les pointeurs */
        *un = *deux;
        *deux = NULL;
        return;
    }

    if (! (*deux) ){ return; }  /* si deux est vide, rien a faire */

    Liste new_liste = NULL;     /* initialisation de liste*/

    /* le premier element */
    if (n) {
        new_liste = *deux;
        *deux = (*deux)->suivant;
    } else {
        new_liste = *un;
        *un = (*un)->suivant;
    }

    /* Pour parcourir */
    Cellule *curr = new_liste;
    int tour = 1 - n;

    /* Tel que les deux listes ne sont pas vides*/
    while ( (*un) && (*deux) ) {
        if (tour) {
            curr->suivant = *deux;
            *deux = (*deux)->suivant;
        } else {
            curr->suivant = *un;
            *un = (*un)->suivant;
        }
        curr = curr->suivant;
        tour = 1 - tour;
    }
    /* Tel que liste un n'est pas vide */
    while (*un) {
        curr->suivant = *un;
        curr = curr->suivant;
        *un = (*un)->suivant;
    }
    /* Tel que liste deux n'est pas vide */
    while (*deux) {
        curr->suivant = *deux;
        curr = curr->suivant;
        *deux = (*deux)->suivant;
    }
    /* Changer le pointeur de un, deux soit NULL */
    *un = new_liste;
}
