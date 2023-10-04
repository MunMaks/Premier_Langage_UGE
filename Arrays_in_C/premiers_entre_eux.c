#define N 5  // anytime we can change it

int pgcd(int a, int b)
{
    if(a == b) { return a; }
    
    else {
        if(a > b) { return pgcd(a-b, b); }

        else { return pgcd(a, b-a); }
    }
}

void premiers_entre_eux(int t[][N]){
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            if(i == 0 && j == 0) {
                t[i][j] = -1;
            }
            else if ( pgcd(i, j) == 1 ) {
                t[i][j] = 1;
            }
            else t[i][j] = 0;
        }
    }
}
int main(void){
    return 0;
}