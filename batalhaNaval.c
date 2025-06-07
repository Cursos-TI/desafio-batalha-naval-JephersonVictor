#include <stdio.h>

int main() {
    int index; // Variável não utilizada
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int coluna[10] = {1,2,3,4,5,6,7,8,9,10};
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,0,0,0,0},
        {0,3,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,3,3,3,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    // Imprime as letras das colunas
    printf("  "); // Espaço para alinhar com os números das linhas
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // Imprime o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%d ", coluna[i]); // Imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}