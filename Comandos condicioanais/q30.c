#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <math.h> //Fun��es matem�ticas
#include <conio.h> //Fun��o para a entrada e sa�da de programas que usam o console DOS
#include <locale.h> // Habilita o uso de acentua��o em palavras


// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

Fac�a um programa que receba tres n � umeros e mostre-os em ordem crescente.
 

*/

int main(){ // Fun��o obrigat�ria

	/* Declara��o de constantes ou vari�veis */
	
	int n1, n2, n3;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite 1� valor:");
	scanf("%d", &n1);
	printf("Digite 2� valor:");
	scanf("%d", &n2);
	printf("Digite 3� valor:");
	scanf("%d", &n3);
	

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(n1 > n2 && n2 > n3){
		
		printf("\n%d", n3);
		printf("\n%d", n2);
		printf("\n%d", n1);	
		
	}else{
		
		if(n1 > n3 && n3 > n2){
			
			printf("\n%d", n2);
			printf("\n%d", n3);
			printf("\n%d", n1);
				
		}else{
			if(n2 > n1 && n1 > n3){
				
				printf("\n%d", n3);
				printf("\n%d", n1);
				printf("\n%d", n2);
					
			}else{
				
				if(n2 > n3 && n3 > n1){
					
					printf("\n%d", n1);
					printf("\n%d", n3);
					printf("\n%d", n2);
					
				}else{
					if(n3 > n1 && n1 > n2){
						
						printf("\n%d", n2);
						printf("\n%d", n1);
						printf("\n%d", n3);
						
					}else{
						if(n3 > n2 && n2 > n1){
							
							printf("\n%d", n1);
							printf("\n%d", n2);
							printf("\n%d", n3);
							
						}else{
							if(n1==n2 && n2==n3){
								
								printf("\n%d", n1);
								printf("\n%d", n2);
								printf("\n%d", n3);
							}
						}
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
