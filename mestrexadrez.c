#include <stdio.h>

// Torre com recursão
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha com recursão
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo com recursão + loops aninhados
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return;

    for (int j = 0; j < horizontal; j++) {
        printf("Direita ");
    }
    printf("Cima\n");

    moverBispo(vertical - 1, horizontal); // chamada recursiva
}

// Cavalo com loops aninhados e múltiplas condições
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        int cima = 2;
        int direita = 1;

        for (int v = 0; v < cima + direita; v++) {
            if (v < cima) {
                if (v == 1) continue;  // exemplo de uso de continue
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
        printf("\n"); // separador entre movimentos do cavalo
    }
}

int main() {
    // Quantidade de casas por peça
    int casasTorre = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1;
    int movimentosVerticaisBispo = 5;
    int movimentosHorizontaisBispo = 1;

    // =============================
    // Movimento da TORRE
    // =============================
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // =============================
    // Movimento da BISPO
    // =============================
    printf("Movimento do Bispo:\n");
    moverBispo(movimentosVerticaisBispo, movimentosHorizontaisBispo);
    printf("\n");

    // =============================
    // Movimento da RAINHA
    // =============================
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // =============================
    // Movimento do CAVALO
    // =============================
    printf("Movimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    return 0;
}