#include <stdio.h>

int verificarSimetria(int matriz[][6], int linha, int coluna){
	
	int matrizAuxiliar[linha][coluna];
	int i, j;
	
	for(j = 0; j < coluna; j++){
		for(i = 0; i < linha; i++){
			matrizAuxiliar[i][j] = matriz[j][i];
		}
	}
	
	for(j = 0; j < coluna; j++){
		for(i = 0; i < linha; i++){
			if(matrizAuxiliar[i][j] != matriz[i][j]){
				return 0;
			}
		}
	}
	
	return 1;

}

void exibirMatriz(int matriz[][6], int linha, int coluna){
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
	linha = coluna = 6;
	int matriz[linha][coluna];
	
	preencherMatriz(matriz, linha, coluna);
	exibirMatriz(matriz, linha, coluna);
	
	printf("\n%d", verificarSimetria(matriz, linha, coluna));
	
}
