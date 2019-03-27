#include <stdio.h>
int main(){
	int A[1000], B[1000], maior, N, i, j = 0, num;
	while (1) {
		scanf ("%d", &N);
		if(N == 0){
            break;
		}

		while (1) {
			maior = N;
			j = 0;

			for (i = 0; i < N; i++) {
				scanf("%d", &num);
				if(num == 0) {
					break;
				}else{
                    A[i] = num;
				}
			}
			if(num == 0) {
				printf("\n");
				break;
			}

			for (i = N-1; i >= 0; i--) {
				 if(A[i] == maior) {
				 	maior--;
				 }else{
				 	B[j++] = A[i];
				 }
				while (j > 0) {
				 	if(B[j-1] == maior) {
				 		j--;
				 		maior--;
				 	}else{
				 		break;
				 	}
				}
			}

			if (maior == 0) {
				printf("Yes\n");
			} else {
				printf("No\n");
			}
		}
	}
	return 0;
}
