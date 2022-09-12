#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

 Escreva um programa que leia um n�mero inteiro maior do que zero e devolva, na tela, a �
soma de todos os seus algarismos. Por exemplo, ao numero 251 corresponder ao valor
8 (2 + 5 + 1). Se o n�mero lido n�o for maior do que zero, o programa terminar a com a
mensagem n�mero inv�lido.
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int num, alg1, rest1, alg2, rest2, soma;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite um n�mero positivo qualquer:");
	scanf("%d", &num);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(num >= 0){
		
		//251
		//Separando os algarismos at� 10 casas
		alg1 = num / 100; // 2
		rest1 = num % 100; //51
		alg2 = rest1 / 10; //5
		rest2 = rest1 % 10; //2
		
		//Realizando a opera��o perdida
		
		soma = alg1 +alg2 + rest2;
		
		//Imprimindo a mensagem
		
		//Voc� pode realizar a impress�o da seguinte forma
		if(num >= 0 && num <= 9){
			
			printf("\n%d => 0 + %d = %d", num, rest2, soma);
			
		}else{
			
			if(num >= 10 && num <= 99){
				
				printf("\n%d => %d + %d = %d", num, alg2, rest2, soma);
				
			}else{
				if(num >= 100 && num <= 999)
				
					printf("\n%d => %d + %d + %d = %d", num, alg1, alg2, rest2, soma);
					
			}
		}
		
		//ou ao inv�s da maneira anterior voc� pode proceder como no coment�rio abaixo mais pr�ximo. N�o esque�a de descartar o que voc� fez anteriomente � claro
		
		
		/*
			Ou voc� podia imprimir apenas a seguinte mensagem
			
			printf("\nA soma dos algarismo de %d = %d", num, soma);
			
		*/
		
	}else{
		
		printf("O n�mero digitado � inv�lido!!");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	   
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
