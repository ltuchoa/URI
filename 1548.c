#include <stdio.h>
#include <stdlib.h>

int compara(int *a, int *b){
    return *b - *a;
}

int main () {
    int N, tam, M[1000], i, aux[1000], count = 0;

    scanf("%d", &N);

    for(N; N > 0; N--){
        scanf("%d", &tam);
        for(i = 0; i < tam; i++){
            scanf("%d", &M[i]);
            aux[i] = M[i];
        }
        qsort(aux, tam, sizeof(int), compara);

        for(i = 0; i < tam; i++){
            if(aux[i] == M[i]){
                count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }

    return 0;
}
