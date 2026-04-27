#include <stdio.h>

int main(){
    int entrada;
    int maior, menor;
    scanf("%d%d", &maior, &menor);

    if(maior < menor){
        int aux = maior;
        maior = menor;
        menor = aux;
    }

    while(scanf("%d", &entrada) != EOF){
        if(entrada > maior) maior = entrada;
        if(entrada < menor) menor = entrada;
    }

    printf("%d\n", (maior - menor));
    
    return 0;
}