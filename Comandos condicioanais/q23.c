#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

 Determine se um determinado ano lido e bissexto. Sendo que um ano e bissexto se
for divis�vel por 400 ou se for divis�vel por 4 e nao for divis�vel por 100.

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int ano;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o ano:");
	scanf("%d", &ano);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if((ano % 400 == 0) && (ano % 4 == 0) && (ano % 100 == 0)){
		
		printf("%d � bissexto",ano);
		
	}else{
		
		printf("%d n�o � bissexto",ano);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); //Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
