#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

Fac�a um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostra qual a classificac�ao dessa pessoa. �
Altura 				Peso
				Ate 60 � Entre 60 e 90 (Inclusive) Acima de 90
Menor que 1,20     A 		D 							G
De 1,20 a 1,70     B 		E 							H
Maior que 1,70     C 		F 							I
 
 

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	float altura,peso;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
	printf("Digite a altura:");
	scanf("%f",&altura);
	printf("Digite o peso:");
	scanf("%f",&peso);
	
	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(altura<1.20){
		if(peso<60){
			
			printf("Classifica��o: A");
		}else{
			if(peso>=60 && peso<=90){
				
				printf("Classifica��o: D");
			}else{
				
				printf("Classifica��o: G");
			}
		}
		
	}else{
		if(altura>=1.20 && altura<=1.70){
			
			if(peso<60){
				
				printf("Classifica��o: B");
			}else{
				if(peso>=60 && peso<=90){
					
					printf("Classifica��o: E");
				}else{
					
					printf("Classifica��o: H");
				}
			}
			
			
		}else{
			
			if(altura>1.70){
				
				if(peso<60){
					
					printf("Classifica��o: C");
				}else{
					
					if(peso>=60 && peso<=90){
						
						printf("Classifica��o: F");
						
					}else{
						
						printf("Classifica��o: I");
					}
				}
				
			}else{
			}
		}
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
