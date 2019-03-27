#include <stdio.h>

int main () {
    long int N, M;

    while(1){
        scanf("%ld %ld", &N, &M);
        if(N == 0 && M == 0){
            break;
        }

        if(M == 1||M == 4||M == 9||M == 11||M == 16||M == 18||M == 20||M == 22||M == 24||M == 25||M == 26||M == 27||M == 28||M == 29||M == 30||M == 31||M == 32||M == 33||M>=35||N >= 50){
            printf("Let me try!\n");
        }else if(N >= 9 && M == 2){ //7
            printf("Let me try!\n");
        }else if(N >= 16 && M == 7){ //9
            printf("Let me try!\n");
        }else if(N >= 18 && M == 5){ //13
            printf("Let me try!\n");
        }else if(N >= 20 && M == 3){ //17
            printf("Let me try!\n");
        }else if(N >= 25 && M == 14){ //11
            printf("Let me try!\n");
        }else if(N >= 27 && M == 12){ //15
            printf("Let me try!\n");
        }else if(N >= 29 && M == 10){ //19
            printf("Let me try!\n");
        }else if(N >= 31 && M == 8){ //23
            printf("Let me try!\n");
        }else if(N >= 33 && M == 6){ //27
            printf("Let me try!\n");
        }else if(N >= 36 && M == 23){ //13
            printf("Let me try!\n");
        }else if(N >= 38 && M == 21){ //17
            printf("Let me try!\n");
        }else if(N >= 40 && M == 19){ //21
            printf("Let me try!\n");
        }else if(N >= 42 && M == 17){ //25
            printf("Let me try!\n");
        }else if(N >= 44 && M == 15){ //29
            printf("Let me try!\n");
        }else if(N >= 46 && M == 13){ //33
            printf("Let me try!\n");
        }else if(N >= 49 && M == 34){ //15
            printf("Let me try!\n");
        }else{
            printf("Don't make fun of me!\n");
        }
    }
    return 0;
}
