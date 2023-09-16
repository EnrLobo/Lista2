#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


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

int main(){
	
	int m1[100][100], m2[100][100], linhas, cols, i, j, soma[100][100], sub[100][100], num, resConst1[100][100], resConst2[100][100];
	char opcao;
	
	printf("Digite o numero de linhas da matriz: ");
	scanf("%d",&linhas);
	
	printf("Digite o numero de colunas da matriz: ");
	scanf("%d",&cols);
	
	geraMatriz(m1, linhas, cols);
	getch();
	geraMatriz(m2, linhas, cols);
	
	printf("\n\tMenu");
	printf("\n\n(A)Soma as matrizes\n(B)Subtrair a primeira matriz da segunda\n(C)Adicionar uma constante as duas matrizes\n(D)Imprimir as matrizes\n\nSelecione uma opcao:");
	scanf("%s",&opcao);	
	
	opcao = toupper(opcao);
	
	if(opcao == 'C'){
		printf("Digite um numero para adicionar aos valores da matriz: ");
		scanf("%d",&num);
	}
	
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(opcao == 'A'){	
				soma[i][j] = m1[i][j] + m2[i][j];		
			}
			if(opcao == 'B'){	
				sub[i][j] = m1[i][j] - m2[i][j];		
			}
			if(opcao == 'C'){		
				resConst1[i][j] = m1[i][j] + num;
				resConst2[i][j] = m2[i][j] + num;
			}
			
		}
	}
	
	if(opcao == 'A'){	
		printMatriz(soma, linhas, cols);	
	}
	if(opcao == 'B'){	
		printMatriz(sub, linhas, cols);		
	}
	if(opcao == 'C'){	
		printMatriz(resConst1, linhas, cols);
		printMatriz(resConst2, linhas, cols);
	}
	if(opcao == 'D'){	
		printMatriz(m1, linhas, cols);
		printMatriz(m2, linhas, cols);			
	}	
	
}
