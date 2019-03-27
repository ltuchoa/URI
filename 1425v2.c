#include <stdio.h>

int main () {
    long int N, M, aux;

    while(1){
        scanf("%ld %ld", &N, &M);
        if(N == 0 && M == 0){
            break;
        }

        aux = (N - M)/2;
        if(M == 1||M == 4||M == 9||M == 11||M == 16||M == 18||M == 20||M == 22||M == 24||M == 25||M == 26||M == 27||M == 28||M == 29||M == 30||M == 31||M == 32||M == 33||M>=35||N >= 50){
            printf("Let me try!\n");
        }else if(N >= 9 && (aux%2 != 0)){
            printf("Let me try!\n");
        }else{
            printf("Don't make fun of me!\n");
        }
    }
    return 0;
}
