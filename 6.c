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
	
	int m1[100][100], m2[100][100], linhas, cols, i, j, soma[100][100], resp;
	
	printf("Digite o numero de linhas: ");
	scanf("%d",&linhas);
	
	printf("Digite o numero de colunas: ");
	scanf("%d",&cols);
	
	geraMatriz(m1, linhas, cols);
	getch();
	geraMatriz(m2, linhas, cols);
	printMatriz(m1, linhas, cols);
	printMatriz(m2, linhas, cols);
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			soma[i][j] = m1[i][j] + m2[i][j];
		}
	}

	printMatriz(soma, linhas, cols);
	
}
