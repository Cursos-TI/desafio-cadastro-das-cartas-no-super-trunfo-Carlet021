#include <stdio.h>

int main() {

    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

   
    int casasBispo = 5;
    int i = 0;
    printf("Movimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

 
    int casasRainha = 8;
    int j = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    printf("\n");
//movimento cavalo
    printf("Movimento do Cavalo:\n");

    int movimentosCavalo = 1; 

    for (int k = 0; k < movimentosCavalo; k++) {
        //criando loop
        int passo = 0;
        do {
            printf("Baixo\n");
            passo++;
        } while (passo < 2);

        printf("Esquerda\n");
    }

    return 0;
}
