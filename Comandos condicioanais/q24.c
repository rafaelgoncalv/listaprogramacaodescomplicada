#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#include <string.h> //Fun��es para manipular strings

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Fac�a um programa em que o usuario entre com o valor e o estado destino do �
produto e o programa retorne o prec�o final do produto acrescido do imposto do estado
em que ele sera vendido. Se o estado digitado n�o for v�lido, mostrar uma mensagem �
de erro.

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	float preco, precofinal;
	char estado[3];
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor:");
	scanf("%f", &preco);
	printf("Digite o estado:");
	printf("============================");
	printf("\nMG - Minas gerais");
	printf("\nSP - S�o paulo");
	printf("\nRJ - Rio de janeiro");
	printf("\nMS - Mato grosso do sul");
	printf("\n============================\n");
	scanf("%s", &estado[0]);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if((estado[0] == 'm' && estado[1] == 'g') || (estado[0] == 'M' && estado[1] == 'G')){
		
			precofinal = preco + 0.07 * preco;
			
			printf("\nO pre�o final � R$%.2f", precofinal);
			
	}else{
		
		if((estado[0] == 's' && estado[1] == 'p') || (estado[0] == 'S' && estado[1] == 'P')){
			
			precofinal = preco + 0.12 * preco;
			
			printf("O pre�o final � R$%.2f", precofinal);
			
		}else{
			if((estado[0] == 'r' && estado[1] == 'j') || (estado[0] == 'R' && estado[1] == 'J')){
				
				precofinal = preco + 0.15 * preco;
			
				printf("O pre�o final � R$%.2f", precofinal);
				
			}else{
				
				if((estado[0] == 'm' && estado[1] == 's') || (estado[0] == 'M' && estado[1] == 'S')){

					precofinal = preco + 0.08 * preco;
					
					printf("O pre�o final � R$%.2f", precofinal);
					
				}else{
					
					printf("Erro");
				}
			}
		}
	}
	

	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); //Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

