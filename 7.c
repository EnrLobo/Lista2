#include<stdio.h>
#include<stdlib.h>


void geraMatriz(int m[][100], int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   m[i][j]=rand()%100;
} //  fim gera

int printMatriz(int m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		   printf("%3d |",m[i][j]);
	  printf("\n");	   
	}// fim for i
	printf("\n");
} //  fim print

int main(){
	
	int m[100][100], linhas, cols, i, j, mult[100][100], num;
	
	printf("Digite o numero de linhas: ");
	scanf("%d",&linhas);
	
	printf("Digite o numero de colunas: ");
	scanf("%d",&cols);
	
	printf("Digite o numero pelo qual voce quer multiplicar a matriz: ");
	scanf("%d",&num);
	
	geraMatriz(m, linhas, cols);
	printMatriz(m, linhas, cols);
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			mult[i][j] = m[i][j] * num;
		}
	}

	printMatriz(mult, linhas, cols);
	
}
