#include <stdio.h>
#include <stdlib.h>

int compara(int *a, int *b){
    return *a - *b;
}

int buscaSequencial(int vet[], int chave, int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(vet[i] == chave){
            return i+1;
        }
    }
    return -1;
}

int main () {
    int N, Q, mat[10000], i, aux, chave, pos, count = 1;

    while(1){
        scanf("%d", &N);
        scanf("%d", &Q);

        if(N == 0 && Q == 0){
            break;
        }

        for(aux = 0; aux < N; aux++){
            scanf("%d", &mat[aux]);
        }
        aux = 1;
        qsort(mat, N, sizeof(int), compara);

        for(i = 1; i <= Q; i++){
            scanf("%d", &chave);
            pos = buscaSequencial(mat, chave, N);

            if(aux == 1){
                printf("CASE# %d:\n", count);
                aux--;
            }
            if(pos > 0){
                printf("%d found at %d\n", chave, pos);
            }else{
                printf("%d not found\n", chave);
            }
        }
        count++;
    }

    return 0;
}
