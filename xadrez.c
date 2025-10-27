#include <stdio.h>


// DECLARAÇÃO DAS FUNÇÕES 

void mover_torre_recursivo(int casas_restantes);
void mover_bispo_recursivo(int casas_restantes);
void mover_rainha_recursivo(int casas_restantes);
void mover_bispo_aninhado(int casas_verticais, int casas_horizontais);
void mover_cavalo_complexo();

// 1. MOVIMENTO DA TORRE (Recursivo)


/**
 * @brief Simula o movimento da Torre de forma recursiva (Direita).
 * @param casas_restantes O número de casas que faltam mover.
 */

void mover_torre_recursivo(int casas_restantes) {
    // Caso base: Para quando não houver mais casas para mover.
    if (casas_restantes <= 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva
    mover_torre_recursivo(casas_restantes - 1);
}

// 2. MOVIMENTO DO BISPO (Recursivo e Aninhado)

/**
 * @brief Simula o movimento do Bispo usando LOOPS ANINHADOS (Vertical externo, Horizontal interno).
 * @param casas_verticais Número de casas para mover verticalmente (Cima).
 * @param casas_horizontais Número de casas para mover horizontalmente (Direita).
 */
void mover_bispo_aninhado(int casas_verticais, int casas_horizontais) {
    int i; // Loop externo (vertical)
    int j; // Loop interno (horizontal)

    printf("Simulando movimento diagonal (Aninhado):\n");
    
    // Loop Externo: Controla o movimento vertical (Cima)
    for (i = 1; i <= casas_verticais; i++) {
        
        // Loop Interno: Controla o movimento horizontal (Direita)
        for (j = 1; j <= casas_horizontais; j++) {
            
            // Imprime o movimento diagonal apenas no caminho da diagonal (i == j)
            if (i == j) {
                printf("Cima, Direita\n");
            }
        }
    }
}

/**
 * @brief Simula o movimento do Bispo de forma recursiva (Diagonal Cima, Direita).
 * @param casas_restantes O número de casas que faltam mover.
 */
void mover_bispo_recursivo(int casas_restantes) {
    // Caso base
    if (casas_restantes <= 0) {
        return;
    }

    printf("Cima, Direita\n");

    // Chamada recursiva
    mover_bispo_recursivo(casas_restantes - 1);
}

// 3. MOVIMENTO DA RAINHA (Recursivo)

/**
 * @brief Simula o movimento da Rainha de forma recursiva (Esquerda).
 * @param casas_restantes O número de casas que faltam mover.
 */
void mover_rainha_recursivo(int casas_restantes) {
    // Caso base
    if (casas_restantes <= 0) {
        return;
    }

    printf("Esquerda\n");

    // Chamada recursiva
    mover_rainha_recursivo(casas_restantes - 1);
}

// 4. MOVIMENTO DO CAVALO (Loops Complexos)
/**
 * @brief Simula o movimento do Cavalo (2 Cima, 1 Direita) usando loops aninhados e controle de fluxo.
 */
void mover_cavalo_complexo() {
    // Variáveis de movimento
    int cima_c = 2;
    int direita_c = 1;
    
    // Variáveis de controle para os loops aninhados e fluxo
    int i_cima_c; 
    int j_direita_c; 
    int passo_total = 0; 

    printf("Simulando movimento do Cavalo (2 Cima, 1 Direita) com controle de fluxo:\n");

    // Loop Externo: Controla as 2 casas para CIMA (FOR)
    for (i_cima_c = 1; i_cima_c <= cima_c; i_cima_c++) {
        
        // Loop Interno: Controla a 1 casa para DIREITA (WHILE)
        j_direita_c = 1;
        while (j_direita_c <= direita_c) {
            
            passo_total++;
            
            // Impressão das direções que compõem o passo 'L'
            printf("Cima\n"); 
            printf("Cima\n"); // Simula os dois passos verticais na primeira iteração do for
            printf("Direita\n");
            
            // Controle de fluxo com 'break'
            if (j_direita_c == direita_c) {
                break; // Garante que o loop interno pare após 1 iteração
            }
            j_direita_c++;
        }
    }
    printf("Cavalo finalizou o movimento.\n\n");
}

// FUNÇÃO PRINCIPAL (MAIN)

int main() {

    int i; 
    int casa_bispo_orig;
    int casa_rainha_orig;

    //1- MOVIMENTO DA TORRE
    printf("Movimento da TORRE (Recursivo)\n");
    printf("Simulando 5 casas para a Direita:\n");
    mover_torre_recursivo(5);
    printf("Torre finalizou o movimento.\n\n");


    //2- MOVIMENTO DO BISPO
    printf("Movimento do BISPO (Loops Aninhados)\n");
    mover_bispo_aninhado(5, 5);
    printf("Bispo finalizou o movimento (Aninhado).\n\n");
    
    //2b- MOVIMENTO DO BISPO
    printf("Movimento do BISPO (Recursivo)\n");
    printf("Simulando 5 casas na diagonal (Cima, Direita):\n");
    mover_bispo_recursivo(5);
    printf("Bispo finalizou o movimento (Recursivo).\n\n");


    //3- MOVIMENTO DA RAINHA 
    printf("Movimento da RAINHA (Recursivo)\n");
    printf("Simulando 8 casas para a Esquerda:\n");
    mover_rainha_recursivo(8);
    printf("Rainha finalizou o movimento.\n\n");


    //4- MOVIMENTO DO CAVALO
    mover_cavalo_complexo();

    return 0;
}