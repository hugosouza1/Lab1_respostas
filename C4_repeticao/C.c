#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int maiorDiferenca = -1;
    char ganhador = 'e';

    for(int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        int diferenca = abs(a - b);
        char vencedor;

        if(a > b)
            vencedor = 'A';
        else if(b > a)
            vencedor = 'B';
        else
            vencedor = 'e';

        if(diferenca > maiorDiferenca){
            maiorDiferenca = diferenca;
            ganhador = vencedor;

        } else if(diferenca == maiorDiferenca){
            if (ganhador != vencedor)
                ganhador = 'e';
        }
    }

    if (ganhador == 'e')
        printf("AMBOS %d\n", maiorDiferenca);
    else
        printf("%c %d\n", ganhador, maiorDiferenca);

    return 0;
}