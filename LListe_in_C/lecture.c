/*
Écrire une fonction lire qui lit les éléments successifs d'une liste chainée donnée en entrée au clavier.
La liste à remplir est passée en paramètre et supposée NULL à l'appel.
La saisie s'arrête lorsque l'utilisateur n'entre rien avant le return.

On utilisera les types:
typedef struct cel{  
    int val;  
    struct cel* suivant;  
} Cellule, * Liste;
*/
void append(Liste* head, int data) {
    Liste new_node = malloc(sizeof *new_node);
    if (!new_node) { return; }
    new_node->val = data;
    new_node->suivant = NULL;

    if (!*head) {
        *head = new_node;
    }
    else {
        Cellule *current = *head;
        while (current->suivant) {
            current = current->suivant;
        }
        current->suivant = new_node;
    }
}

void lire(Liste *lst) {
    int data = 0;
    while (1) {
        if (scanf("%d", &data) != 1)
            break;

        append(lst, data);
    }
}
