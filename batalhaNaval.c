#include <stdio.h>
#define tamanho 10  // Define o tamanho do tabuleiro (10x10)

int main() {
    // Letras para identificar as colunas
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

    // Números para identificar as linhas
    int coluna[10] = {1,2,3,4,5,6,7,8,9,10};

    // Matriz do tabuleiro, inicialmente vazia
    int tabuleiro[tamanho][tamanho];

    // Inicializa todos os elementos da matriz com 0
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Preenche 3 casas verticalmente na coluna 5 (letra 'F')
    // As linhas 3, 4 e 5 (índices 3 a 5) recebem valor 3
    for (int i = 3; i <= 5; i++) {
        tabuleiro[i][5] = 3;
    }

    // Preenche 3 casas horizontalmente na linha 9 (número 10)
    // As colunas 1, 2 e 3 (índices 1 a 3) recebem valor 3
    for (int j = 1; j <= 3; j++) {
        tabuleiro[9][j] = 3;
    }

    // Preenche a diagonal principal (de cima esquerda até baixo direita)
    // Apenas os 3 primeiros elementos (posição [0][0], [1][1], [2][2]) recebem valor 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    // Preenche a diagonal secundária (de cima direita até baixo esquerda)
    // Também apenas 3 casas, desde que estejam vazias (== 0)
    // Posições como [0][9], [1][8], [2][7], etc.
    int casas1 = 0;
    for (int i = 0; i < tamanho && casas1 < 3; i++) {
        int j = tamanho - 1 - i;  // Coluna espelhada da linha
        if (tabuleiro[i][j] == 0) {  // Só preenche se estiver vazia
            tabuleiro[i][j] = 3;
            casas1++;
        }
    }

    // Imprime as letras das colunas no topo
    printf("  ");
    for (int i = 0; i < tamanho; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // Imprime o número da linha seguido pelos valores da matriz
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", coluna[i]);
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}