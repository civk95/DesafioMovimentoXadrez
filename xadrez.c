#include <stdio.h>

// FORAM ENVIADOS COMO TRABALHO SOMENTE ATÉ OS DESAFIOS NOVATO E AVENTUREIRO!

int main() {
    // Movimento da Torre: 5 casas para a direita
    int movimentoTorre = 5;
    printf("\nMovimento da Torre:\n");
    for(int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    int movimentoBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while(i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    int movimentoRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha:\n");
    do{
        printf("Esquerda\n");
        j++;
    } while (j < movimentoRainha);

    // Movimento do Cavalo: 2 casas para baixo e 1 para esquerda
    int movimentoCavalo = 1;
    printf("\nMovimento do Cavalo:\n");
    for(int m = 0; m < movimentoCavalo; m++){
        int passo = 0;
        while(passo < 2){
            printf("Baixo\n");
            passo++;
        }
        printf("Esquerda\n");
    }

    return 0;
}