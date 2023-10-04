int index_max_3d(int t[M][M][M], int s1, int s2, int s3, int* m1, int* m2, int* m3){
    /*
    Écrire une fonction
    int index_max_3d(int t[M][M][M], int s1, int s2, int s3, int* m1, int* m2, int* m3) qui prend en argument un tableau à trois dimension t, 
    puis trois entiers pour délimiter une zone de travail, et enfin trois pointeurs vers un entier. 
    Votre fonction devra rechercher les coordonnées du maximum (i, j, k), où i est compris entre 0 et s1-1 (tous deux inclus), 
    j est compris entre 0 et s2-1 (tous deux inclus) et k est compris entre 0 et s3-1 (tous deux inclus).
    Dans le cas où l'élément maximal serait présent plusieurs fois, on recherchera l'occurence de coordonnées (i, j, k) minimales pour l'ordre lexicographique. 
    Une fois l'occurence trouvée, mettez à jour les trois pointeurs (m1, m2, m3) pour qu'ils pointent vers ces trois coordonnées. 
    Finalement, retournez la valeur maximale du tableau de la zone de recherche.
    */
    int valeur_max = t[0][0][0];
    for (int i = 0; i < s1; ++i){
        for (int j = 0; j < s2; ++j){
            for (int k = 0; k < s3; ++k){
                if (valeur_max < t[i][j][k]){
                    valeur_max = t[i][j][k];

                    *m1 = i; *m2 = j; *m3 = k;
                }

            }
        }
    }
    return valeur_max;
}