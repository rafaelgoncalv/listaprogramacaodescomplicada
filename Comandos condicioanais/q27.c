#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
Categoria Idade
Infantil A 5 a 7
Infantil B 8 a 10
Juvenil A 11 a 13
Juvenil B 14 a 17
Senior � maiores de 18 anos

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int idade;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Digite a idade do nadador:");
	scanf("%d", &idade);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Saida de dados */
	
	if(idade >= 5 && idade <= 7){
		
		printf("Categoria: Infantil A");
		
	}else{
		if(idade >= 8 && idade <= 10){
			
			printf("Categoria: Infantil B");
			
		}else{
			if(idade >= 11 && idade <= 13){
				
				printf("Categoria: Julvenil A");
			}else{
				if(idade >= 14 && idade <= 17){
					
					printf("Categoria: Juvenil B");
				}else{
					
					printf("Categoria: Senior");
				}
			}
		}
	}
	
	// Exibe mensagem na tela

	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
