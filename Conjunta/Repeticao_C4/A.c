#include <stdio.h>

void main(){
    int x,y;
    scanf("%d%d", &x, &y);

    for(int i = y; i >= x; --i){
        if(i % 5 == 0){
            printf("%d\n", i);
        }
    }
}