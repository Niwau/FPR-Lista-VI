#include <stdio.h>

void gerarMatriz(int matriz[][5], int linha, int coluna){

	int count = 1;
	int i, j;
	
	for(i = 0; i < linha; i++){
		
		for(j = 0; j < coluna; j++){
			matriz[i][j] = count;
			count++;
		}
		
		count = i + 2;
		
	}
}

void exibirMatriz(int matriz[][5], int linha, int coluna){
	int i, j;
	
	for(i = 0; i < linha; i++){
		
		for(j = 0; j < coluna; j++){
			printf("%d ", matriz[i][j]);
		}
		
		printf("\n");
		
	}
}

int main(){
	int linha, coluna;
	linha = coluna = 5;
	
	int matriz[linha][coluna];
	
	gerarMatriz(matriz, linha, coluna);
	
	exibirMatriz(matriz, linha, coluna);
}
