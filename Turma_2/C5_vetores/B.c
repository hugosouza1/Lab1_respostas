#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    
    int vetorAuxiliar[n];
    for(int i = 0, j = n - 1; i < n; i++, j--){
        vetorAuxiliar[i] = vetor[j];
    }

    for(int i = 0; i < n; i++){
        vetor[i] = vetorAuxiliar[i];
    }

    for(int i = 0; i < n; i++) {
        printf("%d", vetor[i]);
        if(i < n-1) printf(" ");
    }

    printf("\n");
    return 0;
}