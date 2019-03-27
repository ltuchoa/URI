#include <stdio.h>

int main () {
    int N, M, i, d, flag;

    while(1){
      scanf("%d %d",&N, &M);
      if(N == 0 && M == 0){
          break;
      }
      i = 2;
      d = 1;
      flag = 0;

      if(M > 34){
          printf("Let me try!\n");
      }else{
          while(d > 0 && d < N+1){
              if(d == M){
                  flag++;
                  break;
              }else if(d < M){
                  if( (d + (2*i-1)) < N+1){
                      d += (2*i-1);
                  }else{
                      d -= (2*i-1);
                  }
                  i++;
              }else{
                  if((d - (2*i-1)) > 0){
                      d -= (2*i-1);
                  }else{
                      d += (2*i-1);
                  }
                  i++;
              }
          }
          if(flag != 0){
              printf("Let me try!\n");
          }else{
              printf("Don't make fun of me!\n");
          }
        }
    }
    return 0;
}
