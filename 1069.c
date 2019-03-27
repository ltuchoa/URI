#include <stdio.h>

int main () {
    int N, i, count, aux, aux2;
    char str[1000];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%s", str);
        count = 0;
        //PERCORRE A STRING
        for(aux = 0; str[aux]!='\0'; aux++){
            if(str[aux] == '<'){
                //PROCURA ONDE FECHA
                for(aux2 = aux; str[aux2]!='\0'; aux2++){
                    if(str[aux2] == '>'){
                        str[aux2] = 'o'; //substitui pra nao contar novamente
                        count++;
                        break; //ja achou o par
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
