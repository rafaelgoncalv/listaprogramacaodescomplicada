#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <math.h> //Fun��es matem�ticas
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Leia um numero fornecido pelo usu�ario. Se esse n�umero for positivo, calcule a raiz
quadrada do n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o
n�mero e inv�lido.	 
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int num;
	float raiz;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um n�mero inteiro qualquer:");
	scanf("%d", &num);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(num > 0){
		
		//C�lculo matem�tico
		raiz = sqrt(num);
		printf(" A raiz de %d � %f", num, raiz);
		
	}else{
		if(num < 0){
			
			printf("O n�mero digitado � inv�lido!!!");
				
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
