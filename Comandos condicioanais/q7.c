#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

 Fac�a um programa que receba dois n�meros e mostre o maior. Se por acaso, os dois
n�meros forem iguais, imprima a mensagem n�meros iguais.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int n1, n2;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o 1� valor:");
	scanf("%d", &n1);
	printf("Digite o 2� valor:");
	scanf("%d", &n2);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(n1 > n2){
		
		printf("n1 = %d � o maior n�mero", n1);
		
	}else{
		if(n2 > n1){
			
			printf("n2 = %d � o maior n�mero", n2);
				
		}else{
			
			printf("N�o existe o maior n�mero, pois ambos s�o iguais");
			
		}
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
   
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 


	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
