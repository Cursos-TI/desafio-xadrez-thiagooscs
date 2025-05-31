#include <stdio.h>

// Definição de constantes para as movimentações das peças
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

/**
 * @brief Simula a movimentação do Bispo.
 * O Bispo se move 5 casas na diagonal superior direita.
 * A movimentação é simulada imprimindo "Cima" e "Direita" para cada casa.
 */
void moverBispo() {
    printf("--- Movimentacao do Bispo (Diagonal Superior Direita) ---\n");
    // Utiliza um loop 'for' para simular as 5 casas
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima\n");    // Representa o movimento para cima na diagonal
        printf("Direita\n"); // Representa o movimento para a direita na diagonal
        printf("Bispo moveu 1 casa na diagonal. Total: %d\n", i + 1);
    }
    printf("Bispo completou sua movimentacao de %d casas na diagonal.\n\n", MOVIMENTO_BISPO);
}

/**
 * @brief Simula a movimentação da Torre.
 * A Torre se move 5 casas para a direita.
 * A movimentação é simulada imprimindo "Direita" para cada casa.
 */
void moverTorre() {
    printf("--- Movimentacao da Torre (Direita) ---\n");
    int casasMovidas = 0;
    // Utiliza um loop 'while' para simular as 5 casas
    while (casasMovidas < MOVIMENTO_TORRE) {
        printf("Direita\n");
        casasMovidas++;
        printf("Torre moveu 1 casa para a direita. Total: %d\n", casasMovidas);
    }
    printf("Torre completou sua movimentacao de %d casas para a direita.\n\n", MOVIMENTO_TORRE);
}

/**
 * @brief Simula a movimentação da Rainha.
 * A Rainha se move 8 casas para a esquerda.
 * A movimentação é simulada imprimindo "Esquerda" para cada casa.
 */
void moverRainha() {
    printf("--- Movimentacao da Rainha (Esquerda) ---\n");
    int casasMovidas = 0;
    // Utiliza um loop 'do-while' para simular as 8 casas
    do {
        printf("Esquerda\n");
        casasMovidas++;
        printf("Rainha moveu 1 casa para a esquerda. Total: %d\n", casasMovidas);
    } while (casasMovidas < MOVIMENTO_RAINHA);
    printf("Rainha completou sua movimentacao de %d casas para a esquerda.\n\n", MOVIMENTO_RAINHA);
}

/**
 * @brief Funcao principal do programa.
 * Inicia as simulacoes de movimentacao das pecas de xadrez.
 */
int main() {
    printf("Bem-vindo ao Desafio de Xadrez - MateCheck!\n");
    printf("Simulando as movimentacoes das pecas para testes de desempenho e limites do codigo.\n\n");

    moverBispo();   // Chama a funcao para simular a movimentacao do Bispo
    moverTorre();   // Chama a funcao para simular a movimentacao da Torre
    moverRainha();  // Chama a funcao para simular a movimentacao da Rainha

    printf("Desafio concluido. Todas as movimentacoes foram simuladas.\n");

    return 0; // Indica que o programa foi executado com sucesso
}