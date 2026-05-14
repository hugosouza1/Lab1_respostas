#include <stdio.h>

int main() {
    int matriz[10][10];
    int contagem = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);

            if ((matriz[i][j] % 2) == 0) {
                contagem++;
            }
        }
    }

    printf("%d\n", contagem);

    return 0;
}