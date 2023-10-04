void remplir(char tab[MAX][MAX], int li, int col){
    /*

    Exemples: (avec #define MAX 50 pour information)
    
    remplir(tab, 3, 4) transforme les 3 premières lignes et 4 premières colonnes de tab en
    
    a b c d
    e f g h
    i j k l

    remplir(tab, 4, 10) transforme les 4 premières lignes et 10 premières colonnes de tab en

    a b c d e f g h i j
    k l m n o p q r s t
    u v w x y z a b c d
    e f g h i j k l m n
    */
    int letter = 0;
    for (int i = 0; i < li; ++i){
        for (int j = 0; j < col; ++j){
            tab[i][j] = 'a' + letter;  //ASCII 'a'+1 = 'b'
            //printf("%c ",  tab[i][j]);
            ++letter;
            if (letter == 26) letter = 0;
        }
        //printf("\n");
    }
}