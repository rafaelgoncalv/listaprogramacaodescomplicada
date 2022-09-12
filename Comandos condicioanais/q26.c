#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

Leia a distancia em � Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:
CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Economico! �
maior que 12 Super economico!
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	float distancia, litros, consumo;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a dist�ncia:");
	scanf("%f", &distancia);
	printf("Digite a quantidade de litros de gasolina:");
	scanf("%f", &litros);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* C�lculos matem�ticos */
	
	consumo = distancia / litros;

	/* Saida de dados */
	
	if(consumo < 8){
		
		printf("Venda o carro");
		
	}else{
		if(consumo >= 8 && consumo <= 14){
			
			printf("Econ�mico");
			
		}else{
			if(consumo > 12){
				
				printf("Super econ�mico");
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

