#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a 
presta��o for maior que 20% do sal�rio imprima: Empr�stimo n�o concedido, caso
contrario imprima: Empr�stimo concedido.

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	float salario, prestacao;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor do sal�rio:");
	scanf("%f", &salario);
	printf("O valor da presta��o do empr�stimo:");
	scanf("%f", &prestacao);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(prestacao > 0.2 * salario){
		
		printf("Emprestimo n�o concedido");
	}else{
		
		printf("Empr�stimo concedido");
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
