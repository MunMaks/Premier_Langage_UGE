void fill_tab(int LI, int COL, int N, int tab[][COL][N]){
    /*
    Exemple pour un tableau tab[2][3][5], on aura, après avoir appelé la fonction fill_tab, le contenu suivant :

    [ 1, 2, 3, 4, 5] [ 6, 7, 8, 9,10] [11,12,13,14,15]
    [16,17,18,19,20] [21,22,23,24,25] [26,27,28,29,30]
    */
    int count = 1;
    for (int i = 0; i < LI; ++i){

        for (int j = 0; j < COL; ++j){
          
            for (int k = 0; k < N; ++k){
                tab[i][j][k] = count;
                ++count;
            }
        }
    }
}