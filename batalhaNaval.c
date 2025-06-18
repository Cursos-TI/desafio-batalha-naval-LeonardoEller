#include <stdio.h>
#include <stdlib.h> // Necessário para a função system("pause")

// Define o tamanho do nosso tabuleiro (10x10)
#define TAMANHO_TABULEIRO 10

int main() {
    // -----------------------------------------------------------------
    //  DECLARAÇÃO E INICIALIZAÇÃO
    // -----------------------------------------------------------------

    // Cria o tabuleiro usando um vetor bidimensional (matriz)
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    int i, j; // Variáveis para os loops

    // Preenche todo o tabuleiro com o caractere '~' para representar a água
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = '~';
        }
    }

    // -----------------------------------------------------------------
    //  ENTRADA DE DADOS (MANUALMENTE NO CÓDIGO)
    // -----------------------------------------------------------------

    // --- Navio 1 (Horizontal) ---
    int navio_h_linha = 2;   // Posição Y (linha) inicial
    int navio_h_coluna = 3;  // Posição X (coluna) inicial
    int navio_h_tamanho = 4; // O navio ocupará 4 espaços

    // --- Navio 2 (Vertical) ---
    int navio_v_linha = 5;   // Posição Y (linha) inicial
    int navio_v_coluna = 8;  // Posição X (coluna) inicial
    int navio_v_tamanho = 3; // O navio ocupará 3 espaços

    // -----------------------------------------------------------------
    //  PROCESSAMENTO (POSICIONAMENTO DOS NAVIOS)
    // -----------------------------------------------------------------

    // Posiciona o navio horizontal no tabuleiro
    // A linha fica fixa e a coluna varia
    for (i = 0; i < navio_h_tamanho; i++) {
        tabuleiro[navio_h_linha][navio_h_coluna + i] = 'N'; // 'N' para Navio
    }

    // Posiciona o navio vertical no tabuleiro
    // A coluna fica fixa e a linha varia
    for (i = 0; i < navio_v_tamanho; i++) {
        tabuleiro[navio_v_linha + i][navio_v_coluna] = 'N'; // 'N' para Navio
    }

    // -----------------------------------------------------------------
    //  SAÍDA DE DADOS (EXIBIÇÃO DAS COORDENADAS)
    // -----------------------------------------------------------------
    printf("--- Batalha Naval: Posicionamento dos Navios ---\n\n");

    // Exibe as coordenadas do navio Horizontal
    printf("Coordenadas do Navio Horizontal (Tamanho %d):\n", navio_h_tamanho);
    for (i = 0; i < navio_h_tamanho; i++) {
        // Exibe cada parte do navio no formato (Linha, Coluna)
        printf("  - Parte %d: (%d, %d)\n", i + 1, navio_h_linha, navio_h_coluna + i);
    }

    printf("\n"); // Linha em branco para separar

    // Exibe as coordenadas do navio Vertical
    printf("Coordenadas do Navio Vertical (Tamanho %d):\n", navio_v_tamanho);
    for (i = 0; i < navio_v_tamanho; i++) {
        // Exibe cada parte do navio no formato (Linha, Coluna)
        printf("  - Parte %d: (%d, %d)\n", i + 1, navio_v_linha + i, navio_v_coluna);
    }

    // (Bônus) Exibe o tabuleiro completo para uma melhor visualização
    printf("\n\n--- Visualizacao do Tabuleiro ---\n");
    printf("    0 1 2 3 4 5 6 7 8 9 (Colunas)\n");
    printf("   ---------------------\n");
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d | ", i); // Imprime o número da linha
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("   ---------------------\n");


    // -----------------------------------------------------------------
    //  PAUSA PARA VISUALIZAÇÃO
    // -----------------------------------------------------------------
    printf("\nPressione qualquer tecla para fechar o programa...\n");
    system("pause"); // Comando que pausa a execução no Windows
                     // Em outros sistemas, pode ser necessário usar getchar()

    return 0; // Indica que o programa terminou com sucesso
}
