#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int audiencia[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &audiencia[i]);
    }

    int maior_variacao = 0;

    for (int i = 1; i < n; i++) {
        int variacao = audiencia[i] - audiencia[i-1];

        if (variacao > maior_variacao) {
            maior_variacao = variacao;
        }
    }
    
    printf("%d\n", maior_variacao);
    return 0;
}