#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Fa�a um programa que calcule e mostre a area de um trap�zio. Sabe-se que: �
	
	A = (basemaior + basemenor) * altura/2

	Lembre-se a base maior e a base menor devem ser numeros maiores que zero. 
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	float basemaior, basemenor, altura, area;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor da base maior:");
	scanf("%f",	&basemaior);
	printf("Digite o valor da base menor:");
	scanf("%f", &basemenor);
	printf("Digite o valor da altura:");
	scanf("%f", &altura);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(basemaior > 0 && basemenor > 0){
		
		area = ((basemaior + basemenor)*altura) / 2;
		
		printf("A �rea do trap�zio � %f", area);
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	//system("PAUSE"); //Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
