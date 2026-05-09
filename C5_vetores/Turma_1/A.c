#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    
    int cofre[n];

    for(int i = 0; i < n; ++i){
        scanf("%d", &cofre[i]);
    }
    
    int soma = 0;
    for(int i = 0; i < n; ++i){
        if( (i % 2 == 0 ) && (cofre[i] % 2 == 0)){
            soma += cofre[i];
        }
    }
    
    printf("%d\n", soma);
    return 0;
}