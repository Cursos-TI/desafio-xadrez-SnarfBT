#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // Caso base: todas as casas foram movidas
    printf("Direita %d\n", atual);
    moverTorre(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // Caso base: todas as casas foram movidas
    printf("Esquerda %d\n", atual);
    moverRainha(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo com loops aninhados
void moverBispoRecursivo(int casas, int vertical, int horizontal) {
    if (vertical > casas) return; // Caso base: todas as direções verticais foram concluídas
    if (horizontal > casas) { // Resetar o movimento horizontal e avançar na vertical
        moverBispoRecursivo(casas, vertical + 1, 1);
        return;
    }
    printf("Cima, Direita (%d,%d)\n", vertical, horizontal);
    moverBispoRecursivo(casas, vertical, horizontal + 1); // Próxima casa na diagonal
}

// Função para movimentar o Cavalo
void moverCavalo(int casasCima, int casasDireita) {
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= casasCima; i++) { // Loop para o movimento para cima
        printf("Cima %d\n", i);
        if (i == casasCima) { // Após concluir as três casas para cima
            for (int j = 1; j <= casasDireita; j++) { // Movimento para a direita
                printf("Direita %d\n", j);
            }
        }
    }
}

int main() {
    // Constantes para o número de movimentos
    const int TORRE_CASAS = 5;
    const int BISPO_CASAS = 5;
    const int RAINHA_CASAS = 8;
    const int CAVALO_CASAS_CIMA = 3; // Cavalo se move 3 casas para cima
    const int CAVALO_CASAS_DIREITA = 1; // Cavalo se move 1 casa para a direita

    // Simulação da Torre
    printf("Movimento da Torre:\n");
    moverTorre(TORRE_CASAS, 1);
    printf("\n");

    // Simulação do Bispo com recursividade e loops aninhados
    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(BISPO_CASAS, 1, 1);
    printf("\n");

    // Simulação da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(RAINHA_CASAS, 1);
    printf("\n");

    // Simulação do Cavalo
    moverCavalo(CAVALO_CASAS_CIMA, CAVALO_CASAS_DIREITA);

    return 0;
}
