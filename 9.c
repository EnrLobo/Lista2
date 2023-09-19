#include <stdlib.h>
#include <stdio.h>
//#include "matrizLib.h"

int lerMatriz(int m[][100],int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   scanf("%d",&m[i][j]);
}

int Mult(int matriz[100][100], int matriz2[100][100], int resultado[100][100], int linha1, int col1, int col2){
	int j, i, k;
	
	for (i = 0; i < linha1; i++) {
        for ( j = 0; j < col2; j++) {
            for ( k = 0; k < col1; k++) {
                resultado[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }
}
	
int printMatriz(int m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		   printf("%3d |",m[i][j]);
	  printf("\n");	   
	}
	printf("\n");
}

int main(){
	
	int matriz[100][100], matriz2[100][100], result[100][100], linha1 = 2, col1 = 3, linha2 = 3, col2 = 2, i, j, aux;
	
	system("color A");
	
	lerMatriz(matriz,linha1,col1);
	
	printf("------");
	printf("\n");
	
	lerMatriz(matriz2,linha2,col2);
	
	printf("------");
	printf("\n");
	printf("\n");
	
	col2Matriz(matriz,linha1,col1);
	
	printf("\n");
	
	printMatriz(matriz2,linha2,col2);
	
	printf("\n");
	
	Mult(matriz, matriz2, result, linha1, col1, col2);
	
	printf("\n");
	
	printMatriz(result,linha1,col2);
	
}
