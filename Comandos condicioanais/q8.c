#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Fa�a um programa que leia 2 notas de um aluno, verifique se as notas sao v�lidas e
exiba na tela a m�dia destas notas. Uma nota v�lida deve ser, obrigatoriamente, um 
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor v�lido, este fato deve ser �
informado ao usu�rio e o programa termina.
 

*/

int main(){ // Fun��o obrigat�ria

	/* Declara��o de constantes ou vari�veis */
	
	float nota1, nota2, media;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a nota n1:");
	scanf("%f", &nota1);
	printf("Digite a nota n2:");
	scanf("%f", &nota2);
	

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
		
		media = (nota1 + nota2)/2;
		
		printf("A m�dia � %f", media);
		
	}else{
		
		printf("As notas digitadas s�o inv�lidas");
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
	
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
