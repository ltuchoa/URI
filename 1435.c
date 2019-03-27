#include <stdio.h>

int fazMat (int mat[100][100], int N, int aux, int nN) {
    if (N < 0){
        return 0;
    }
    int i, j;

    for(i = 0; i < N - aux; i++){
            j = aux + i;

            //preenche |-
            mat[j][aux] = aux + 1;
            mat[aux][j] = aux + 1;
            //preenche _|
            mat[nN-j][nN-aux] = aux + 1;
            mat[nN-aux][nN-j] = aux + 1;
    }
    fazMat(mat, N-1, aux+1, nN);
}

int main () {
    int N, mat[100][100], aux = 0, i, j;

    while(1){
        scanf("%d", &N);
        if(N == 0) {
            break;
        }

        fazMat(mat, N, aux, N-1);

        //PRINTA MATRIZ
        for(i = 0;i < N; i++){
            for(j = 0;j < N; j++){
                if(j == 0){
                    printf("%3d",mat[i][j]);
                }else{
                    printf(" %3d",mat[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}
