#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define TAM 5

typedef struct livraria{
	char  titulo[70];
	char  autor[70];
	char  editora[70]; 

} tipo_livraria;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, opcao0, i;
	
	tipo_livraria ficha[TAM];
	
	while(opcao0 != 0){

		printf("-------------------------------------------------------------------\n");
		printf("\t\t\tSISTEMA DE CADASTRO\n");
		printf("-------------------------------------------------------------------\n\n");
		printf("1 – Inserir um novo cadastro \n");
		printf("2 – Mostrar todos os cadastros \n");
		printf("0 – Encerrar \n");
		printf("\n\n");
		printf ("Selecione uma opção por favor ~> ");
		scanf("%d", &opcao);
		printf("\n");
		
		switch (opcao){
		
			case 1:
				system("cls");
				
				if (i==5){
					printf("Sistema de cadastro lotado. Não é possível armazenar mais informações!\n");
				
				}else{
				for(i=0; i<TAM; i++){
					fflush(stdin);
					printf("Digite o nome do livro:\n");
					gets(ficha[i].titulo);
					fflush(stdin);
				
					printf("Digite o nome dos autores da obra:\n");
					gets(ficha[i].autor);
					fflush(stdin);
					
					printf("Digite o nome da Editora:\n");
					gets(ficha[i].editora);
					fflush(stdin);
					printf("\n\n\t\t");
					system("pause");
					system("cls");
					fflush(stdin);
						
					}
				}
				break;
			
			case 2:
				system("cls");
				if (i==0){
					printf("Lista vazia!\n");
					system("pause");
					
				}else {
				
				for(i=0; i<TAM; i++){
					
				printf("\n Código do produto: %d\n", i+1);
				printf("\n Título: %s\n", ficha[i].titulo);
				printf("\n Autor: %s\n", ficha[i].autor);
				printf("\n Editora: %s\n", ficha[i].editora);
				printf("\n");
				system ("pause");
					}
				}
				break;
			
			case 0:
				system("cls");
				printf("Sistema sendo finalizado!");
				exit(0);
				
			default:
				printf("Erro: opção inválida!");
				printf("\n\n");
				break;
			
		}
	}
}

