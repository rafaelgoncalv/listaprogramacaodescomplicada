#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Escrever um programa que leia o codigo do produto escolhido do card�pio de uma lan- �
chonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execu��o somente ser  a calculado um pedido. O card�pio da lan- �
chonete segue o padrao abaixo: �
Especifica��o	C�digo  Pre�o
Cachorro Quente 100 	1.20
Bauru Simples 	101 	1.30
Bauru com Ovo 	102 	1.50
Hamburguer 		103 	1.20
Cheeseburguer 	104 	1.70
Suco 			105 	2.20
Refrigerante    106 	1.00
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int codigo, quantidade;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o c�digo:");
	printf("\n------------------------");
	printf("\n100 - Cachorro quente");
	printf("\n101 - Bauru simples");
	printf("\n102 - Bauru com ovo");
	printf("\n103 - Hamburguer");
	printf("\n104 - Cheeseburguer");
	printf("\n105 - Suco");
	printf("\n106 - Refrigerante");
	printf("\n------------------------\n");
	scanf("%d", &codigo);
	printf("Digite a quantidade:");
	scanf("%d", &quantidade);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Saida de dados */
	
	switch(codigo){
		
		case 100:
			
			printf("O pre�o a ser pago R$%.2f", quantidade * 1.20);
		
		break;
		
		case 101:
			
			printf("O pre�o a ser pago R$%.2f", quantidade * 1.30);
		
		break;
			
		case 102:
			
			printf("O pre�o a ser pago R$%.2f", quantidade * 1.50);
		
		break;

		case 103:
			
			printf("O pre�o a ser pago R$%.2f", quantidade * 1.20);
			
		break;
		
		case 104:
			
			printf("O pre�o a ser pago R$%.2f", quantidade * 1.70);
			
		break;
			
		case 105:
			
			printf("O pre�o a ser pago R$%.2f", quantidade * 2.20);
		
		break;
		
		case 106:
			
			printf("O pre�o a ser pago R$%.2f", quantidade * 1.00);
			
		break;
		
		default:
			
			printf("O c�digo digitado � inv�lido");
		
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
