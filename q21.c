#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

Escreva o menu de opc��es abaixo. Leia a op��o do usu�rio e execute a opera��o esco-
lhida. Escreva uma mensagem de erro se a op��o for inv�lida.
Escolha a op��o:
1- Soma de 2 n�umeros.
2- Diferen�a entre 2 n�meros (maior pelo menor).
3- Produto entre 2 n�meros.
4- Divis�o entre 2 n�meros (o denominador n~ao pode ser zero).
Op��o.

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int a , b, opcao;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor de a:");
	scanf("%d", &a);
	printf("Digite o valor de b:");
	scanf("%d", &b);
	printf("Digite a opera��o desejada:");
	printf("\n===========================");
	printf("\n1 - Soma");
	printf("\n2 - Diferen�a");
	printf("\n3 - Produto");
	printf("\n4 - Divis�o");
	printf("\n===========================\n");
	scanf("%d", &opcao);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	switch(opcao){
		
		case 1:
			
			printf("\n%d + %d = %d", a, b, a+b);
			
		break;
		
		case 2:
			
			if(a > b){
				
				printf("\n%d - %d = %d", a, b, a-b);
				
			}else{
				if(a < b){
					
					printf("%d - %d = %d", b, a, b-a);
					
				}else{
					
					printf("%d - %d = %d", a, b, a-b);
					
				}
			}
			
		break;
		
		case 3:
			
			printf("%d * %d = %d", a, b, a*b);
			
		break;
		
		case 4:
		
			if(b > 0){
				
				printf("%d / %d = %.2f", a, b, (float)a / b);
					
			}else{
				
				printf("N�o � poss�vel efetuar essa divis�o!!!");
				
			}
		break;
		
		default: 
		
			printf("O n�mero da op��o digitado � inv�lido!!!");
			
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
