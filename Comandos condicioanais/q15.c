#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto e, domingo se � 1, segunda-feira se 2, e
assim por diante.	
 
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int dia;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o dia da semana:");
	scanf("%d", &dia);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	switch(dia){
		
		case 1:
			
			printf("Domingo");
			
		break;
		
		case 2:
			
			printf("Segunda-feira");
			
		break;
		
		case 3:
			
			printf("Ter�a-feira");
			
		break;
			
		case 4:
			
			printf("Quarta-feira");
			
		break;
		
		case 5:
			
			printf("Quinta-feira");
		
		break;
		
		case 6:
			
			printf("Sexta-feira");
			
		break;
		
		case 7:
			
			printf("S�bado");
				
		break;
		
		default:
			
			printf("O dia digitado � inv�lido");
		
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

