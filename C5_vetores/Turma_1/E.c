#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    float temperaturas[n];

    for(int i = 0; i < n; ++i){
        scanf("%f", &temperaturas[i]);
    }
    
    float soma = 0;
    for(int i = 0; i < n; ++i){
        soma += temperaturas[i];
    }

    float media = soma / n;
    
    int dias = 0;
    for(int i = 0; i < n; ++i){
        if(temperaturas[i] > media){
            dias++;
        }
    }

    printf("%d\n", dias);
    return 0;
}