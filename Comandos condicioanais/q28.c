#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <math.h> //Fun��es matem�ticas
#include <conio.h> //Fun��o para a entrada e sa�da de programas que usam o console DOS
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

Fac�a um programa que leia tres n � umeros inteiros positivos e efetue o c � alculo de uma das �
seguintes medias de acordo com um valor num � erico digitado pelo usu � ario: �
3
(a) Geometrica: �
raiz c�bica de x * y * z
(b) Ponderada: x+2*y+3*z/6
(c) Harmonica: �
1/1/x + 1/y + 1/z
(d) Aritmetica: �
x+y+z/3

*/

int main(){ // Fun��o obrigat�ria

	/* Declara��o de constantes ou vari�veis */
	
	float x, y, z, media;
	char tipo;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor de x:");
	scanf("%f", &x);
	printf("Digite o valor de y:");
	scanf("%f", &y);
	printf("Digite o valor de z:");
	scanf("%f", &z);
	printf("Digite o tipo de media desejada:");
	printf("\n============================");
	printf("\na - M�dia geom�trica");
	printf("\nb - M�dia ponderada");
	printf("\nc - M�dia harm�nica");
	printf("\nd - M�dia aritm�tica");
	printf("\n============================\n");
	scanf(" %c", &tipo);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	switch(tipo){
		
		case 'a':
			
			media = pow((x+y+z),1.0/3.0);
			
			printf("\nA m�dia geom�trica � %.2f", media);
			
		break;
		
		case 'b':
			
			media = (x + 2*y + 3*z)/6;
			
			printf("\nA m�dia ponderada � %.2f", media);
			
		break;
		
		case 'c':
			
			media = 1/(1/x + 1/y + 1/z);
			
			printf("\nA m�dia harm�nica � %.2f", media);
			
		break;
		
		case 'd':
			
			media = (x+y+z)/3;
			
			printf("\nA m�dia aritm�tica � %.2f", media);
			
		break;
		
		default:
			
			printf("\nO tipo digitado � inv�lido!!!");
			
		break;
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
