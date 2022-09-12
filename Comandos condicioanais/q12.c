#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <math.h> //Fun��es matem�ticas
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Ler um numero inteiro. Se o n � umero lido for negativo, escreva a mensagem n�mero inv�lido
inv�lido�. Se o n�mero for positivo, calcular o logaritmo deste n�mero.
 

*/

int main(){ // Fun��o obrigat�ria

	/* Declara��o de constantes ou vari�veis */
	
	int num;
	float logaritmo;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um n�mero inteiro positivo qualquer:");
	scanf("%d", &num);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(num > 0){
		
		logaritmo = log10(num);
		
		printf("O logaritmo de %d � %.2f", num, logaritmo);
		
	}else{
		
		printf("O n�mero digitado � inv�lido!!!");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */
	  
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
