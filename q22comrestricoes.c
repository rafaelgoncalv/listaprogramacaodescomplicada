#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

Leia a idade e o tempo de servic�o de um trabalhador e escreva se ele pode ou nao se
aposentar. As condi��eses para aposentadoria s�o:
� Ter pelo menos 65 anos,
� Ou ter trabalhado pelo menos 30 anos,
� Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int idade, tempot, idademin;
	
	/* Fim */

	/* Entrada de dados */
	
	printf("Digite a idade:");
	scanf("%d", &idade);
	printf("Digite o tempo de trabalho:");
	scanf("%d", &tempot);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 
	
	//Calculando a idade m�nima que o trabalhador precisa ter para ter aquele tempo de contribui��o
	
	idademin = idade - tempot;

	/* Saida de dados */
	
	if(idademin >= 18){
		
		if((idade >= 65 || tempot >= 30) || (idade >= 60 && tempot >= 25)){
			
			printf("\nPode se aposentar");
			
		}else{
			
			printf("\nN�o pode se aposentar");
			
		}
		
	}else{
		
		printf("\nA idade que trabalhador come�ou a trabalhar � menor do que a permitida por lei");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); //Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
