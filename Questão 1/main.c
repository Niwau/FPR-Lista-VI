#include <stdio.h>

/* ===
Faça uma função que, dada uma matriz M8×5 de reais,
gere a matriz Mt, sua transposta.
=== */

void preencherMatriz(float matriz[][5], int linhaMatriz, int colunaMatriz){
    int i, j;

    for(i = 0; i < linhaMatriz; i++ ){
        for(j = 0; j < colunaMatriz; j++){
            matriz[i][j] = j;
        }
    }

}

void exibirMatriz(float matriz[][5], int linhaMatriz, int colunaMatriz){
     int i, j;

    for(i = 0; i < linhaMatriz; i++ ){
        for(j = 0; j < colunaMatriz; j++){
            printf("%.0f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int linhaMatriz, colunaMatriz, linhaTransposta, colunaTransposta;

    linhaMatriz = colunaTransposta = 8;
    colunaMatriz = linhaTransposta = 5;

    float matriz[8][5];
    float matrizTransposta[5][8];

    preencherMatriz(matriz, linhaMatriz, colunaMatriz);

    exibirMatriz(matriz, linhaMatriz, colunaMatriz);

}
