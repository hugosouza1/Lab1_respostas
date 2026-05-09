#include <stdio.h>

int main(){
    int pos; scanf("%d", &pos);

    int antepassado = 0, passado = 1;
    int atual;

    for(int i = 2; i <= pos; ++i){
        atual = antepassado + passado;
        antepassado = passado;
        passado = atual;        
    }

    if(pos >= 2){
        printf("%d\n", atual);
    } else {
        printf("%d\n", pos); // gambiarra
    }

}