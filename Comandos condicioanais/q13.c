#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

 Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas. A primeira e 
a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a m�dia do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para aprova��o deve ser igual ou
superior a 60 pontos.

 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	float nota1, nota2, nota3, mediap;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a nota 1:");
	scanf("%f", &nota1);
	printf("Digite a nota 2:");
	scanf("%f", &nota2);
	printf("Digite a nota 3:");
	scanf("%f", &nota3);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* C�lculos matem�ticos */
	
	mediap = (nota1 * 1 + nota2 * 1 + nota3 * 2) / 4;

	/* Saida de dados */
	
	if(mediap >= 60){
		
		printf("\nA m�dia ponderada � %.2f", mediap);
		printf("\nAprovado");
		
	}else{
		
		printf("\nA m�dia ponderada � %.2f", mediap);
		printf("\nReprovado");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
  
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

