#include <stdio.h>

/* ===
Desenvolver uma função que, dada uma matriz 15x20, 
determine se um número X se encontra na linha L da matriz. 
=== */

void preencherMatriz(int matriz[][20], int linha, int coluna){
    int i, j;

    for(i = 0; i < linha; i++ ){
        for(j = 0; j < coluna; j++){
            matriz[i][j] = j;
        }
    }
    
}

void exibirMatriz(int matriz[][20], int linha, int coluna){
    int i, j;

    for(i = 0; i < linha; i++ ){
        for(j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
}

int buscarValor(int valor, int matriz[][20], int linha, int coluna){
	
	int j;
	
	for(j = 0; j < coluna; j++){
		
		if(matriz[linha][j] == valor){
			return 1;
		}
	
	}
	
	return 0;
	
}


int main(){
	int linha = 15;
	int coluna = 20;
	int matriz[linha][coluna];
	int valor, linhaEscolhida;
	int result;
	
	preencherMatriz(matriz, linha, coluna);
	
	exibirMatriz(matriz, linha, coluna);
	
	printf("\nInsira um valor e uma linha: ");
	
	scanf("%d %d", &valor, &linhaEscolhida);
	
	printf("%d", buscarValor(valor, matriz, linhaEscolhida, coluna));
	
	
}
