#include <stdio.h>

    int main(){
        char colunas[10]= {'A','B','C','D','E','F','G','H','I','J'};
        // TABULEIRO (10X10)
        int tabuleiro[10][10];

        // Inicializando o tabuleiro com água (0)
        for (int i = 0; i < 10; i++){ //i sempre vai acrescentar 1 iniciando de 0 ate o 10 estabalecido
            for (int j = 0; j < 10; j++){
                tabuleiro[i][j] = 0;
     }             
    }

        // Posicionando o navio vertical na coluna X
        //Navio da vertical(Coluna D, linhas 5, 6 e 7)
        tabuleiro[4][3] = 3;
        tabuleiro[5][3] = 3;
        tabuleiro[6][3] = 3;

        //Navio da horizontal(Linha 2, colunas H, I e J)
        tabuleiro[1][7] = 3;
        tabuleiro[1][8] = 3;
        tabuleiro[1][9] = 3;

        // Impressão das colunas
    printf("TABULEIRO DE BATALHA NAVAL\n");// Espaço inicial para alinhar com as linhas
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]); // Imprime cada letra do vetor 
    }
    printf("\n");

        // Exibindo o tabuleiro
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


        return 0;
    }