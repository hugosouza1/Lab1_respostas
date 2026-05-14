#include <stdio.h>

int main() {
    int matriz[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int num; scanf("%d", &num);
    int caminho[num];
    for(int i = 0; i < num; i++){
        scanf("%d", &caminho[i]);
    }
    
    int contagem = 0;
    for(int i = 0; i < (num-1); i++){
        if(matriz[caminho[i]][caminho[i+1]] == 1) contagem++;
    }

    if(contagem == (num -1)) printf("CAMINHO VALIDO\n");
    else printf("CAMINHO INVALIDO\n");

    return 0;
}