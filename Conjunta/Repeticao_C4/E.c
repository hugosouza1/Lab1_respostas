#include <stdio.h>

int main(){
    int entrada;

    while(scanf("%d", &entrada) != EOF){
        int div = 0;

        for(int i = 1; i < entrada; i++){
            if((entrada % i) == 0){
                ++div;
            }
        }

        if(div == 1){
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    }
    return 0;
}