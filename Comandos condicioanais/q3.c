#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <math.h> //Fun��es matem�ticas
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista
	
	Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contr � ario, �
imprima o numero ao quadrado. 
 

*/

int main(){ // Fun��o obrigat�ria

	/* Declara��o de constantes ou vari�veis */
	
	float num, raiz, potencia;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um n�mero qualquer:");
	scanf("%f", &num);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(num > 0){
		
		//C�lculo matem�tico
		raiz = sqrt(num);
		printf("A raiz de %f � %f", num, raiz);
		
	}else{
		if(num < 0){
			
			//C�lculo matem�tico
			potencia = pow(num,2);
			
			printf("%f ao quadrado � %f", num, potencia);
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
