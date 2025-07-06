#include <stdio.h>

int main() {
    int i;

    // =============================
    // Movimento da TORRE (FOR loop)
    // =============================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // =============================
    // Movimento do BISPO (WHILE loop)
    // =============================
    int casasBispo = 5;
    i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // =============================
    // Movimento da RAINHA (DO-WHILE loop)
    // =============================
    int casasRainha = 8;
    i = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);

    return 0;
}