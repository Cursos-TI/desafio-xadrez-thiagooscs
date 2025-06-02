#include <stdio.h> 
// Definição de constantes para as movimentações das peças
// (Mantidas dos desafios anteriores para contexto, mas não usadas diretamente aqui)
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

// Novas constantes para o movimento do Cavalo
#define PASSOS_CAVALO_VERTICAL 2   // O Cavalo move 2 casas em uma direção principal (eixo Y)
#define PASSOS_CAVALO_HORIZONTAL 1 // O Cavalo move 1 casa na direção perpendicular (eixo X)

/**
 * @brief Simula a movimentacao do Cavalo em "L".
 * O Cavalo move-se "duas casas para baixo e uma casa para a esquerda".
 * Utiliza loops aninhados (um 'for' e um 'while') conforme o requisito.
 */
void moverCavalo() {
    printf("--- Movimentacao do Cavalo (Padrao L: 2 para Baixo, 1 para Esquerda) ---\n");

    // Loop externo: Responsável pelas 2 casas para baixo (movimento vertical)
    // O 'i' representa cada uma das duas unidades de movimento vertical.
    for (int i = 0; i < PASSOS_CAVALO_VERTICAL; i++) {
        printf("  Cavalo moveu 1 casa para Baixo. (Passo vertical %d/%d)\n", i + 1, PASSOS_CAVALO_VERTICAL);

        // Loop interno: Responsável pela 1 casa para a esquerda (movimento horizontal)
        // Este loop aninhado executa o movimento horizontal após cada "passo" vertical,
        // completando a forma de 'L'.
        int j = 0; // Contador para o loop 'while'
        while (j < PASSOS_CAVALO_HORIZONTAL) {
            printf("    Cavalo moveu 1 casa para Esquerda. (Passo horizontal %d/%d)\n", j + 1, PASSOS_CAVALO_HORIZONTAL);
            j++; // Incrementa o contador do loop interno
        }
    }
    printf("Cavalo completou sua movimentacao em 'L'.\n\n");
}

/**
 * @brief Funcao principal do programa.
 * Orquestra as simulacoes de movimentacao das pecas de xadrez.
 */
int main() {
    printf("Bem-vindo ao Desafio de Xadrez - MateCheck!\n");
    printf("Nivel Aventureiro: Simulação da movimentacao do Cavalo em 'L'.\n\n");

    // Chama a funcao para simular a movimentacao do Cavalo
    moverCavalo();

    printf("Desafio do Nivel Aventureiro concluido.\n");

    return 0; // Indica que o programa foi executado com sucesso
}
