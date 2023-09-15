#include<stdio.h>
#include<stdlib.h>


void geraMatriz(int m[][100],int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   m[i][j]=rand()%100;
} //  fim gera

void printMatriz(int m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		   printf("%3d |",m[i][j]);
	  printf("\n");	   
	}// fim for i
	printf("\n");
} //  fim print

int equal(int m[][100], int linhas, int cols, int num){
	int i, j, eq = 0;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(m[i][j] == num){
				eq++;
			}
		}
	}
	return eq;
}

int main(){
	
	int  linhas, cols, m[100][100], num, equ;
	
	printf("Digite o numero de linhas: ");
	scanf("%d",&linhas);
	
	printf("Digite o numero de colunas: ");
	scanf("%d",&cols);
	
	geraMatriz(m, linhas, cols);

	printMatriz(m, linhas, cols);
	
	printf("Digite o numero que voce deseja saber quantos ha na matriz: ");
	scanf("%d",&num);
	
	equ = equal(m, linhas, cols, num);
	
	printf("Ha %d numero(s) %d", equ, num);
	
}
