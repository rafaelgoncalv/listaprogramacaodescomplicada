#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

 
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int a, b, opcao;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor de a:");
	scanf("%d",	&a);
	printf("Digite o valor de b:");
	scanf("%d",	&b);
	printf("Digite o tipo de opera��o desejada:");
	printf("\n========================");
	printf("\n1 - Soma");
	printf("\n2 - Subtra��o");
	printf("\n3 - Multiplica��o");
	printf("\n4 - Divis�o");
	printf("\n5 - Resto da divis�o");
	printf("\n========================\n");
	scanf("%d",	&opcao);
	

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Saida de dados */
	
	switch(opcao){
		
		case 1: 
			
			printf("%d + %d = %d", a, b, a+b);
		
		break;

		case 2: 
			
			printf("%d - %d = %d", a, b, a-b);
		
		break;
		
		case 3: 
			
			printf("%d * %d = %d", a, b, a*b);
		
		break;

		case 4:
			
			printf("%d / %d = %d", a, b, a/b);
		
		break;

		case 5: 
			
			printf("%d / %d = %d", a, b, a%b);
		
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
