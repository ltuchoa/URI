#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef struct estrutura{
    int topo;
    int pilha[MAX];

    int inicio;
    int topof;
    int fila[MAX];

    int topofp;
    int filap[MAX];
}Estrutura;

void criaEstrutura(Estrutura *est);
void insere(Estrutura *est, int n);
void retira(Estrutura *est);
int cmpfunc(const void *a, const void *b);

int main() {
    int N, op, num, flagPilha = 0, flagFila = 0, flagFilaP = 0;
    Estrutura *est = (Estrutura*)malloc(sizeof(Estrutura));
    criaEstrutura(est);

    while(1){
        scanf("%d", &N);
        if(N == -1) break;
        while(N--){
            scanf("%d %d", &op, &num);
            if(op == 1){
                insere(est, num);
            }else if(op == 2){
                qsort(est->filap, est->topofp+1, sizeof(int), cmpfunc);
                if(num != est->pilha[est->topo]){
                    flagPilha = 1;
                }
                if(num != est->fila[est->inicio]){
                    flagFila = 1;
                }
                if(num != est->filap[est->topofp]){
                    flagFilaP = 1;
                }
                retira(est);
            }
        }
        if((flagFilaP == 0 && flagFila == 0 && flagPilha == 0) || (flagFilaP != 0 && flagFila == 0 && flagPilha == 0) || (flagFilaP == 0 && flagFila != 0 && flagPilha == 0) || (flagFilaP == 0 && flagFila == 0 && flagPilha != 0)){
            printf("not sure\n");
        }else if(flagFilaP == 0){
            printf("priority queue\n");
        }else if(flagFila == 0){
            printf("queue\n");
        }else if(flagPilha == 0){
            printf("stack\n");
        }else{
            printf("impossible\n");
        }
        criaEstrutura(est);
        flagFila = 0;
        flagFilaP = 0;
        flagPilha = 0;
    }
    return 0;
}

void criaEstrutura(Estrutura *est){
    //pilha
    est->topo = -1;
    //fila
    est->topof = -1;
    est->inicio = 0;
    //fila prioridade
    est->topofp = -1;
}

void insere(Estrutura *est, int n){
    //pilha
    est->topo++;
    est->pilha[est->topo] = n;
    //fila
    est->topof++;
    est->fila[est->topof] = n;
    //fila prioridade
    est->topofp++;
    est->filap[est->topofp] = n;
}

void retira(Estrutura *est){
    //pilha
    est->topo--;
    //fila
    est->inicio++;
    //filap
    est->topofp--;
}

int cmpfunc(const void *a, const void *b){
    return ( *(int*)a - *(int*)b );
}
