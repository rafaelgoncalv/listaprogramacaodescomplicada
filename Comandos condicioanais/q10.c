#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Fa�a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes f�rmulas (onde h corresponde � altura): `
� Homens: (72.7 * h) - 58
� Mulheres: (62, 1 * h) - 44, 7
 

*/

int main(){ // Fun��o obrigat�ria

	/* Declara��o de constantes ou vari�veis */
	
	float h, pesoideal;
	char sexo;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a altura:");
	scanf("%f", &h);
	printf("Digite o sexo [F/M]:");
	scanf(" %c", &sexo);
	//sexo = getche();

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(sexo == 'F' || sexo == 'f'){
		
		pesoideal = 62.1 * h - 44.7;
		printf("\nO peso ideal � igual %.2fKg\n",pesoideal);
		
	}else{
		if(sexo == 'M' || sexo == 'm'){
			
			pesoideal = 72.7 * h - 58;
			printf("\nO peso ideal � igual %.2fKg\n",pesoideal);
				
		}else{
			
			printf("\nO sexo digitado � inv�lido\n");//Apesar da quest�o n�o ter perdido isto eu fiz essa condi��o adicional para mostrar uma mensagem de erro ao usuario
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
