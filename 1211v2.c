#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 201
#define TMAX 100000

typedef struct num{
    char n[MAX];
} NumTel;

int compare (const void *t1, const void *t2){
    const NumTel *ia = (NumTel *)t1;
    const NumTel *ib = (NumTel *)t2;
    int rc;
    if((rc = strcmp(ia->n, ib->n)) != 0){
        return rc;
    }
    return 0;
}

int main(){
    NumTel tel[TMAX];
    long int N, i, j, cont = 0, tam;

    while(1){
        scanf("%ld", &N);
        if(N == EOF){
            break;
        }
        cont = 0;
        //tel = malloc(N*sizeof(NumTel));
        for(i = 0; i < N; i++){
            scanf("%s",tel[i].n);
        }

        tam = strlen(tel[0].n);

        qsort(tel, N, sizeof(NumTel), compare);

        for(i = 1; i < N ; i++){
            for(j = 0; j < tam; j++){
                if(tel[i].n[j] == tel[i-1].n[j])
                    cont++;
                else
                    break;
            }
        }
        printf("%ld\n", cont);
        //free(tel);
    }

    return 0;
}
