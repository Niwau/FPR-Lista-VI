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

void gerarTransposta(float matriz[][5], int linhaMatriz, int colunaMatriz, float transposta[][8]){
    int i, j;
    int linhaTransposta = colunaMatriz;
    int colunaTransposta = linhaMatriz;

    for(j = 0; j < colunaMatriz; j++){
    	for(i = 0; i < linhaMatriz; i++){
			transposta[j][i] = matriz[i][j];
		}
	}
    
}

/* === Número da coluna igual ao da coluna que deseja exibir === */

void exibirMatriz(float matriz[][8], int linhaMatriz, int colunaMatriz){
     int i, j;

    for(i = 0; i < linhaMatriz; i++ ){
        for(j = 0; j < colunaMatriz; j++){
            printf("%.1f ", matriz[i][j]);
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
    
    printf("\n");
    
	gerarTransposta(matriz, linhaMatriz, colunaMatriz, matrizTransposta);

    exibirMatriz(matrizTransposta, linhaTransposta, colunaTransposta);
    

}
