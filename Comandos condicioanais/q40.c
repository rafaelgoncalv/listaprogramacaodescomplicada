#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	O custo ao consumidor de um carro novo � a soma do custo de f�brica, da comiss�o
do distribuidor, e dos impostos. A comiss�o e os impostos s�o calculados sobre o custo
de f�brica, de acordo com a tabela abaixo. Leia o custo de f�brica e escreva o custo ao �
consumidor.

CUSTO DE FABRICA �                 % DO DISTRIBUIDOR        % DOS IMPOSTOS
ate R$12.000,00 �                         5                     isento
entre R$12.000,00 e 25.000,00             10                    15
acima de R$25.000,00                      15                    20
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	float custof;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"PT-BR");
	printf("Digite o custo de f�brica:");
	scanf("%f", &custof);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Saida de dados */
	
	if(custof <= 12000.00){
		
		printf("O custo do consumidor � %.2f", custof + 0.05 * custof);
		
	}else{
		if(custof > 12.000 && custof <= 25000.00){
			
			printf("O custo do consumidor � %.2f", custof + 0.10 * custof + 0.15 * custof);
			
		}else{
			
			printf("O custo do consumidor � %.2f", custof + 0.15 * custof + 0.20 * custof);
			
		}
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
