#include <stdio.h>

int main () {
    char N[1000];
    int i, abre, fecha;

    while(scanf("%s", &N) != EOF){
        abre = 0;
        fecha = 0;
        for(i = 0; N[i] != '\0'; i++){
            if(N[i] == '('){
                abre++;
            }else if(N[i] == ')'){
                fecha++;
                if(abre >= 1){
                    abre--;
                    fecha--;
                }
            }
        }
        if(abre == 0 && fecha == 0){
            printf("correct\n");
        }else{
            printf("incorrect\n");
        }
    }

    return 0;
}
