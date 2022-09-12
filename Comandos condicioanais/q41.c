#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Fa�a um algoritmo que calcule o IMC de uma pessoa e mostre sua classifica��o de
acordo com a tabela abaixo:
IMC 			Classifica��o
< 18,5 			Abaixo do Peso
18,6 - 24,9 	Saud�vel
25,0 - 29,9 	Peso em excesso
30,0 - 34,9 	Obesidade Grau I
35,0 - 39,9 	Obesidade Grau II(severa)
>= 40,0 		Obesidade Grau III(morbida)
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	float peso, altura, imc;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o peso em Kg:");
	scanf("%f", &peso);
	printf("Digite a altura em metro:");
	scanf("%f", &altura);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* C�lculos matem�ticos */
	
	imc = peso / (altura * altura);

	/* Saida de dados */
	
	if(imc <= 18.5){
		
		printf("O imc � igual � %.2f\n", imc);
		printf("Abaixo do peso");
		
	}else{
		
		if(imc >= 18.6 && imc <= 24.9){
			
			printf("O imc � igual � %.2f\n", imc);
			printf("Saud�vel");
			
		}else{
			if(imc >= 25.0 && imc <= 29.9){

				printf("O imc � igual � %.2f\n", imc);
				printf("Peso em excesso");
				
			}else{
				if(imc >= 30.0 && imc <= 34.9){
					
						printf("O imc � igual � %.2f\n", imc);
						printf("Obesidade grau 1");
						
				}else{
					if(imc >= 35.0 && imc <= 39.9){
						
							printf("O imc � igual � %.2f\n", imc);
							printf("Obesidade grau 2 (severa)");
							
					}else{
							printf("O imc � igual � %.2f\n", imc);
							printf("Obesidade grau 3 (m�rbida)");
					}
				}
			}
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
