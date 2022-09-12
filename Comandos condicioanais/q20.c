#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcriço do enunciado para n�o ficar olhando toda hora a lista

	Dados tr�s valores, A, B, C, verificar se eles podem ser valores dos lados de um tri�ngulo
e, se forem, se e um tri�ngulo escaleno, equilatero ou isoscele, considerando os seguin-
tes conceitos:
	1. O comprimento de cada lado de um tri�nngulo e menor do que a soma dos outros
dois lados.
	2. Chama-se equilatero o tri�ngulo que tem tr�s lados iguais.
	3. Denominam-se isosceles o tri�ngulo que tem o comprimento de dois lados iguais.
	4. Recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes. 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declaração de constantes ou variáveis */
	
	int a, b, c;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o tamanho do lado a:");
	scanf("%d", &a);
	printf("Digite o tamanho do lado b:");
	scanf("%d", &b);
	printf("Digite o tamanho do lado c:");
	scanf("%d", &c);
	

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	if((a + b > c) && (b + c > a) && (a + c > b)){
		
		if(a == b && b == c){
			
			printf("� um tri�ngulo equil�tero");
			
		}else{
			
			if((a == b && b != c) || (b == c && b != a)){
				
				printf("� um tri�nngulo isoc�les");
				
			}else{
				
				printf("� um tri�ngulo escaleno");
				
			}
		}
	}else{
		
		printf("N�o � um tri�ngulo");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
 
	//system("PAUSE"); //Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
