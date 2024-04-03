/*
extrait dans liste
Ecrire une fonction Cellule * extrait(Liste *liste,int x), qui extrait, si elle existe, la cellule contenant x. 
La fonction renvoie l'adresse de la cellule extraite ou NULL. 
S'il y en a plusieurs cellules contenant la valeur x, nous considérerons seulement la première.

On utilisera les types:
typedef struct cel{  
    int val;   
    struct cel* suivant;  
} Cellule, * Liste;
*/

Liste extrait(Liste *lst,int x){
    if ( !*lst ) { return NULL; }

    Cellule *curr = *lst;
    if ( curr->val == x ) {
        *lst = (*lst)->suivant;
        return curr;
    }
    Cellule *prec = NULL;
    while (curr){
        if (curr->val == x){
            if (curr->suivant)
                prec->suivant = curr->suivant;
            else
                prec->suivant = NULL;
            return curr;
        }
        prec = curr;
        curr = curr->suivant;
    }
    return NULL;
}
