#include <stdio.h>

int main() {
    // Constantes para o número de casas
    const int TORRE_CASAS = 5;
    const int BISPO_CASAS = 5;
    const int RAINHA_CASAS = 8;

    // Simulação da Torre usando a estrutura for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= TORRE_CASAS; i++) {
        printf("Direita %d\n", i);
    }
    printf("\n");

    // Simulação do Bispo usando a estrutura while
    printf("Movimento do Bispo:\n");
    int casas_bispo = 1;
    while (casas_bispo <= BISPO_CASAS) {
        printf("Cima, Direita %d\n", casas_bispo);
        casas_bispo++;
    }
    printf("\n");

    // Simulação da Rainha usando a estrutura do-while
    printf("Movimento da Rainha:\n");
    int casas_rainha = 1;
    do {
        printf("Esquerda %d\n", casas_rainha);
        casas_rainha++;
    } while (casas_rainha <= RAINHA_CASAS);
    printf("\n");

    return 0;
}

