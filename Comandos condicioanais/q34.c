#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

 Leia a nota e o n�mero de faltas de um aluno, e escreva seu conceito. De acordo com a �
tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redu��o de conceito.

NOTA 			CONCEITO (ATE 20 FALTAS) � CONCEITO (MAIS DE 20 FALTAS)
9.0 ate 10.0 �		 A 							B
7.5 ate 8.9 � 		 B 							C
5.0 ate 7.4 � 		 C 							D
4.0 ate 4.9 � 		 D 							E
0.0 ate 3.9 � 		 E 							E 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	float nota;
	int faltas;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a nota:");
	scanf("%f", &nota);
	printf("Digite o n�mero de faltas:");
	scanf("%d", &faltas);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(faltas <= 20){
		if(nota >= 9.0 && nota <= 10.0){
			
			printf("Conceito: A");
			
		}else{
			if(nota >= 7.5 && nota <= 8.9){
				
				printf("Conceito: B");
				
			}else{
				if(nota > 5.0 && nota <= 7.4){
					
					printf("Conceito: C");
					
				}else{
					if(nota >= 4.0 && nota <= 4.9){
						
						printf("Conceito: D");
					}else{
						
						printf("Conceito: E");
					}
				}
			}
		}
	}else{
		if(nota >= 9.0 && nota <= 10.0){
			
			printf("Conceito: B");
			
		}else{
			if(nota >= 7.5 && nota <= 8.9){
				
				printf("Conceito: C");
				
			}else{
				if(nota > 5.0 && nota <= 7.4){
					
					printf("Conceito: D");
					
				}else{
					if(nota >= 4.0 && nota <= 4.9){
						
						printf("Conceito: E");
					}else{
						
						printf("Conceito: E");
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
