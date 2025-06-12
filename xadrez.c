#include <stdio.h>

// --- Funções Recursivas para as Peças ---

/**
 * @brief Simula o movimento recursivo da Torre para a direita.
 * Imprime "Direita" para cada casa percorrida.
 * @param casas O número de casas restantes para a Torre se mover.
 */
void moverTorreRecursivo(int casas) {
    // Caso base: Se não há mais casas para mover, a recursão para.
    if (casas == 0) {
        return;
    }
    // Ação: Imprime a direção do movimento para a casa atual.
    printf("Direita\n");
    // Chamada recursiva: Move para a próxima casa, diminuindo o contador de casas.
    moverTorreRecursivo(casas - 1);
}

/**
 * @brief Simula o movimento recursivo do Bispo na diagonal (Cima, Direita),
 * utilizando loops aninhados para imprimir os componentes vertical e horizontal.
 * @param casas O número de casas restantes para o Bispo se mover na diagonal.
 */
void moverBispoRecursivo(int casas) {
    // Caso base: Se não há mais casas para mover, a recursão para.
    if (casas == 0) {
        return;
    }

    // Lógica para simular o movimento diagonal (Cima, Direita) usando loops aninhados.
    // O loop externo simula o movimento vertical (1 casa para cima).
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");
    }
    // O loop interno simula o movimento horizontal (1 casa para a direita).
    for (int h = 0; h < 1; h++) {
        printf("Direita\n");
    }

    // Chamada recursiva: Move para a próxima casa diagonal, diminuindo o contador de casas.
    moverBispoRecursivo(casas - 1);
}

/**
 * @brief Simula o movimento recursivo da Rainha para a esquerda.
 * Imprime "Esquerda" para cada casa percorrida.
 * @param casas O número de casas restantes para a Rainha se mover.
 */
void moverRainhaRecursivo(int casas) {
    // Caso base: Se não há mais casas para mover, a recursão para.
    if (casas == 0) {
        return;
    }
    // Ação: Imprime a direção do movimento para a casa atual.
    printf("Esquerda\n");
    // Chamada recursiva: Move para a próxima casa, diminuindo o contador de casas.
    moverRainhaRecursivo(casas - 1);
}


int main() {
    // --- Simulação do movimento da Torre (usando recursividade) ---
    printf("--- Movimento da Torre (Recursivo) ---\n");
    int casasTorre = 5; // Define o número de casas que a Torre irá se mover
    moverTorreRecursivo(casasTorre); // Chama a função recursiva para a Torre
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do movimento do Bispo (usando recursividade e loops aninhados) ---
    printf("--- Movimento do Bispo (Recursivo com Loops Aninhados) ---\n");
    int casasBispo = 5; // Define o número de casas que o Bispo irá se mover
    moverBispoRecursivo(casasBispo); // Chama a função recursiva para o Bispo
    printf("\n"); // Adiciona uma linha em branco

    // --- Simulação do movimento da Rainha (usando recursividade) ---
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    int casasRainha = 8; // Define o número de casas que a Rainha irá se mover
    moverRainhaRecursivo(casasRainha); // Chama a função recursiva para a Rainha
    printf("\n"); // Adiciona uma linha em branco

    // --- Simulação do movimento do Cavalo (usando loops aninhados complexos) ---
    printf("--- Movimento do Cavalo (Loops Aninhados Complexos) ---\n");
    int casasParaCima = 2; // O Cavalo se move 2 casas para cima
    int casasParaDireita = 1; // O Cavalo se move 1 casa para a direita
    int totalLMovements = 1; // Vamos simular um único movimento em 'L'

    // Loop externo: Controla o número de movimentos em 'L' que o Cavalo fará (neste caso, apenas 1).
    // Este loop usa uma condição mais complexa com 'totalLMovements'.
    for (int l_move = 0; l_move < totalLMovements; l_move++) {
        // Primeiro estágio do movimento em 'L': 2 casas para cima.
        // Loop com múltiplas variáveis para controle e demonstração de 'continue'.
        for (int i = 0, j = casasParaCima; i < casasParaCima; i++, j--) {
            printf("Cima\n"); // Imprime a direção
            if (i == 0 && j == casasParaCima - 1) {
                // Esta condição é apenas para demonstrar 'continue'.
                // Em um cenário real, 'continue' seria usado para pular iterações específicas
                // baseado em alguma lógica complexa. Aqui, apenas demonstra o fluxo.
                continue;
            }
        }

        // Segundo estágio do movimento em 'L': 1 casa para a direita.
        // Loop 'while' com condição complexa e demonstração de 'break'.
        int k = 0;
        int maxRightMoves = 1; // Para garantir que só imprima uma vez "Direita"
        while (k < casasParaDireita) {
            printf("Direita\n"); // Imprime a direção
            k++;
            if (k >= maxRightMoves) {
                // Esta condição demonstra 'break'.
                // Em um cenário real, 'break' seria usado para sair do loop prematuramente
                // baseado em alguma condição, como encontrar um obstáculo.
                break; // Sai do loop 'while' após mover para a direita uma vez.
            }
        }
    }
    printf("\n"); // Adiciona uma linha em branco

    return 0; // Indica que o programa foi executado com sucesso
}
