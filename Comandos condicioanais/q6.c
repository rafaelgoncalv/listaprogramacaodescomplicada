#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
    
 Escreva um programa que, dados dois n�meros inteiros, mostre na tela o maior deles,
assim como a diferen�a existente entre ambos.
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int n1, n2;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor de n1:");
	scanf("%d", &n1);
	printf("Digite o valor de n2:");
	scanf("%d", &n2);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(n1 > n2){
		
		printf("O maior n�mero � n1 = %d",n1);
		printf("\nA diferen�a entre %d e %d � %d", n1, n2, n1-n2);
		
	}else{
			
		printf("O maior n�mero � n2 = %d", n2);
		printf("\nA diferen�a entre %d e %d � %d", n2, n1, n2-n1);
			
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 


	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
