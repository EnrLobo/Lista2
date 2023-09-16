#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int  linhas, cols, m[100][100], j, i;
	
	printf("Digite o numero de linhas: ");
	scanf("%d",&linhas);
	
	printf("Digite o numero de colunas: ");
	scanf("%d",&cols);
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("Digite um valor: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(i + j == cols - 1 ){
				printf("\nA diagonal secundaria e: %d", m[i][j]);
			}			
		}
	}
	
}
