#include <stdio.h>

int main() {
    // Constantes para o número de movimentos
    const int TORRE_CASAS = 5;
    const int BISPO_CASAS = 5;
    const int RAINHA_CASAS = 8;
    const int CAVALO_CASAS_BAIXO = 3;  // Três casas para baixo
    const int CAVALO_CASAS_ESQUERDA = 1; // Uma casa para a esquerda

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

    // Simulação do Cavalo usando loops aninhados
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= CAVALO_CASAS_BAIXO; i++) { // Movimento para baixo
        printf("Baixo %d\n", i);

        if (i == CAVALO_CASAS_BAIXO) { // Após concluir as três casas para baixo
            int j = 1;
            while (j <= CAVALO_CASAS_ESQUERDA) { // Movimento para a esquerda
                printf("Esquerda %d\n", j);
                j++;
            }
        }
    }
    printf("\n");

    return 0;
}

