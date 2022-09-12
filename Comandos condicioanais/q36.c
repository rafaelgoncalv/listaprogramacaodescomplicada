#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Escreva um programa que, dado o valor da venda, imprima a comissao que dever � a ser �
paga ao vendedor. Para calcular a comissao, considere a tabela abaixo: �
Venda mensal 											Comiss�o
Maior ou igual a R$100.000,00 							R$700,00 + 16% das vendas
Menor que R$100.000,00 e maior ou igual a R$80.000,00 	R$650,00 +14% das vendas
Menor que R$80.000,00 e maior ou igual a R$60.000,00 R	$600,00 +14% das vendas
Menor que R$60.000,00 e maior ou igual a R$40.000,00 	R$550,00 +14% das vendas
Menor que R$40.000,00 e maior ou igual a R$20.000,00 	R$500,00 +14% das vendas
Menor que R$20.000,00 									R$400,00 +14% das vendas

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	float valor;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("O valor da venda:");
	scanf("%f", &valor);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(valor >= 100000.00){
		
		printf("O valor da comiss�o R$%.2f", 700.00 + 0.16 * valor);
		
	}else{
		if(valor >= 80000.00 && valor < 100000.00){
			
			printf("O valor da comiss�o R$%.2f", 650.00 + 0.14 * valor);
			
		}else{
			if(valor >= 60000.00 && valor < 80000.00){
				
				printf("O valor da comiss�o R$%.2f", 600.00 + 0.14 * valor);
				
			}else{
				if(valor >= 40000.00 && valor < 60000.00){
					
					printf("O valor da comiss�o R$%.2f", 550.00 + 0.14 * valor);
					
				}else{
					if(valor >= 20000.00 && valor < 40000.00){
						
						printf("O valor da comiss�o R$%.2f", 500.00 + 0.14 * valor);
						
					}else{
						
						printf("O valor da comiss�o R$%.2f", 400.00 + 0.14 * valor);
					}
				}
			}
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

