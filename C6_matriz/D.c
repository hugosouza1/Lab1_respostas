#include <stdio.h>

int main() {
    int matriz[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int a, b;
    scanf("%d%d", &a, &b);
    
    int primeiraOcorrencia = 1;
    for(int i = 0; i < 10; i++){
        if( (matriz[a][i] == 1) && (matriz[b][i] == 1) ){
            if(primeiraOcorrencia){
                printf("%d", i);
                primeiraOcorrencia = 0;
            } else {
                printf(" %d", i);
            }
        }
    }

    printf("\n");

    return 0;
}