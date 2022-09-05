#include <stdio.h>

void preencherMatriz(int matriz[][8], int linhas, int colunas){
	int i, j;
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			matriz[i][j] = j;
		}
	}
}

void exibirMatriz(int matriz[][8], int linhas, int colunas){
	int i, j;
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void exibirVetor(int vetor[], int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		printf("%d ", vetor[i]);
	}
}


void gerarSoma(int matriz[][8], int linhas, int colunas, int vetor[], int tam){
	int somaColuna = 0;
	int i, j;
	
	for(j = 0; j < colunas; j++){
		for(i = 0; i < linhas; i++){
			somaColuna += matriz[i][j];
		}
		vetor[j] = somaColuna;
		somaColuna = 0;
	}
}

int main(){
	int linhas = 10;
	int colunas = 8;
	int tam = 8;
	
	int matriz[linhas][colunas];
	int vetor[tam];
	
	preencherMatriz(matriz, linhas, colunas);
	
	exibirMatriz(matriz, linhas, colunas);
	
	printf("\n");

	
	gerarSoma(matriz, linhas, colunas, vetor, tam);

	exibirVetor(vetor, tam);
}
