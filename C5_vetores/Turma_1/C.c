#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char resultados[1001];
    for (int i = 0; i < n; i++) {
        scanf(" %c", &resultados[i]);
    }

    int ocorrencia = 0, maiorSequencia = 0;
    for(int i = 0; i < n; ++i){
        if(resultados[i] == 'V'){
            ocorrencia++;
            if(ocorrencia > maiorSequencia){
                maiorSequencia = ocorrencia;
            }
        } else {
            ocorrencia = 0;
        }
    }

    int resposta = maiorSequencia;
    printf("%d\n", resposta);
    return 0;
}