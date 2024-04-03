/*
Coupe d'une liste
Écrire une fonction coupe qui reçoit deux listes et un entier n strictemment positif; la deuxième liste est supposé vide.
Elle coupe la première après la n-ième cellule et affecte le reste à l deuxième liste. 
Si n est nul ou plus grand ou égal au nombre d'éléments de la liste on renvoie 0 et il ne se passe rien.
Sinon on renvoie 1.

Exemple:
- Si la première liste contient 3->4->2->fin et n=1, les listes contiennent 3->fin et 4->2->fin après éxécution de la fonction.

On utilisera les types:
typedef struct cel{  
    int val;   
    struct cel* suivant;  
} Cellule, * Liste;
*/

int coupe(Liste *un, Liste *deux, int n){
    
    if (! (*un) || !n) { return 0; }
    
    Cellule *curr = *un;

    while (curr) {
        --n;
        if ( !n ){
            if (curr->suivant) {
                *deux = curr->suivant;
                curr->suivant = NULL;
                return 1;
            }
        }
        curr = curr->suivant;
    }
    return 0;
}
