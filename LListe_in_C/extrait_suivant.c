/*
Extrait dans liste
Écrire une fonction Cellule* extrait_suivant(Liste l, int precede), qui extrait, 
si elle existe, la cellule située après celle contenant precede. 
La fonction renvoie l'adresse de la cellule extraite ou NULL si elle n'existe pas.

Exemple :
- Si la liste l contenait 3->1->2->4->fin et precede=1, l'appel extrait_suivant(l,precede) renvoyera une cellule contenant 2, 
et la liste l après éxécution contiendra 3->1->4->fin.

On utilisera les types:
typedef struct cel{  
    int val;   
    struct cel* suivant;  
} Cellule, * Liste;
*/
Cellule* extrait_suivant(Liste l, int precede) {
   if (!l) { return NULL; }

   Cellule* prec = NULL;
   while (l){
       if (prec){
           if (l->val == precede){
               if (l->suivant)
                    prec->suivant = l->suivant;
                else
                    prec->suivant = NULL;
               return l;
           }
       }
       prec = l;
       l = l->suivant;
   }
   return NULL;
}
