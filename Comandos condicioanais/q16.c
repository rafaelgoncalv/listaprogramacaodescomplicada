#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o m�s
correspondente a este n�mero. Isto �, janeiro se 1, fevereiro se 2, e assim por diante.

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int mes;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o n�mero correspondente ao m�s:");
	scanf("%d", &mes);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	switch(mes){
		
		case 1:
			
			printf("Janeiro");
			
		break;
		
		case 2:
			
			printf("Fevereiro");
			
		break;
		
		case 3:
			
			printf("Mar�o");
		
		break;
			
		case 4:
			
			printf("Abril");
			
		break;
			
		case 5:
			
			printf("Maio");
		
		break;
			
		case 6:
			
			printf("Junho");
		
		break;
			
		case 7:
			
			printf("Julho");
			
		break;
			
		case 8: 
			
			printf("Agosto");
			
		break;
			
		case 9:
			
			printf("Setembro");
		
		break;
			
		case 10:
			
			printf("Outubro");
			
		break;
			
		case 11:
			
			printf("Novembro");
			
		break;
			
		case 12:
			
			printf("Dezembro");
			
		break;
			
		default: 
			
			printf("O m�s digitado � inv�lido!!!");
		
		break;
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	//system("PAUSE"); //Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
