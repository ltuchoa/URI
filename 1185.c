#include <stdio.h>

int main (){
    char op;
    int i, j, coluna;
    float soma = 0, num;

    scanf("%d ", &coluna);
    scanf("%c", &op);

    for(i = 0; i <= 11; i++){
        for(j = 0; j <= 11; j++){
            scanf("%f", &num);
            if(j + i <= 10){
                soma += num;
            }
        }
    }

    if(op == 'S'){
        printf("%.1f\n", soma);
    }else{
        printf("%.1f\n", soma/66);
    }

    return 0;
}

