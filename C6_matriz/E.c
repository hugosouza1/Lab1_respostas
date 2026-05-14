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
    
    int maior, menor;
    maior = menor = matriz[0][n-1];

    for(int i = 0, j = (n-1); i < n; i++, j--){
        int valor = matriz[i][j];
        if(valor > maior) maior = valor;
        if(valor < menor) menor = valor;
    }

    printf("Menor: %d\nMaior: %d\n", menor, maior);


    return 0;
}