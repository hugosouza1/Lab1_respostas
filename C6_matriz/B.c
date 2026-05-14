#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int matriz[n][n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j != n-1) printf("%d ", matriz[j][i]);
            else       printf("%d", matriz[j][i]);
        }
        printf("\n");
    }


    return 0;
}