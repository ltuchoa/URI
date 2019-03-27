#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct palavra{
       int tam;
       int pos;
       char *p;
} Palavra;

int compare(const void * a, const void * b){
    Palavra *pa = (Palavra *)a;
    Palavra *pb = (Palavra *)b;

    if(pb->tam == pa->tam){
        return pa->pos - pb->pos;
    }
    return pb->tam - pa->tam;
}

int main(){
    int N, i, count, j;
    char linha[2600];
    char *palavras;

    scanf("%d", &N);
    getchar();

    for(i = 0; i < N; i++){
          gets(linha);
          count = 0;
          Palavra array[51];
          palavras = strtok (linha, " ");

          while (palavras != NULL){
                array[count].p = palavras;
                array[count].tam = strlen(palavras);
                array[count].pos = count;
                count++;
                palavras = strtok (NULL, " ");
          }

          qsort(array, count, sizeof(Palavra), compare);

          for(j = 0; j < count; j++){
                if(j == count-1){
                    printf("%s\n", array[j].p);
                }else{
                    printf("%s ", array[j].p);
                }
          }
    }

    return 0;
}
