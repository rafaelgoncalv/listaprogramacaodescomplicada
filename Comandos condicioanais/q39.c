#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras.

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

 Uma empresa decide dar um aumento aos seus funcion�rio de acordo com uma tabela
que considera o sal�rio atual e o tempo de servi�o de cada funcion�rio. Os funcion�rios
com menor sal�rio ter�o um aumento proporcionalmente maior do que os funcion�rios
com um sal�rio maior, e conforme o tempo de servi�o na empresa, cada funcion�rio ir�
receber um b�nus adicional de sal�rio. Fa�a um programa que leia:
� o valor do sal�rio atual do funcion�rio; �
� o tempo de servi�o desse funcion�rio na empresa (n�mero de anos de trabalho na
empresa).
Use as tabelas abaixo para calcular o salario reajustado deste funcion � ario e imprima o �
valor do salario final reajustado, ou uma mensagem caso o funcion � ario n � ao tenha direito �
a nenhum aumento.
 

*/

int main(){ // Fun��o obrigat�ria

	/* Declara��o de constantes ou vari�veis */
	float salario;
	int tempoc;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o sal�rio do funcion�rio:");
	scanf("%f", &salario);
	printf("Digite o tempo de servi�o:");
	scanf("%d", &tempoc);

	// Solicita que o usu�rio que entre com algum dado qualquer
	
	//Reajuste com base no salario atual
	
	if(salario <= 500){
	
		salario += salario * 0.25;
				
	}else{
		if(salario <= 1000){
			
			salario += salario * 0.20;
			
		}else{
			
			if(salario <= 1500){
				
				salario += salario * 0.15;
				
			}else{
				
				if(salario <= 2000){
					
					salario += salario * 0.10;
					
				}else{
					
					printf("\nSalario n�o reajustado");
					
				}
			}
		}
	}
	
	//Reajuste com base no tempo de contribui��o
	
	if(tempoc > 10){
		
		salario += 500;
		
	}else{
		if(tempoc >= 7){
			
			salario += 300;
			
		}else{
			if(tempoc >= 4){
				
				salario += 200;
				
			}else{
				if(tempoc >= 1){
					
					salario += 100;
					
				}else{
					
					printf("\nSem b�nus");
					
				}
			}
		}
	}
	
	/* Fim */ 

	/* Saida de dados */
	
	printf("\nO sal�rio final: %.2f", salario);
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("clear||cls"); //Limpar a tela Windows e no LINUX   
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

