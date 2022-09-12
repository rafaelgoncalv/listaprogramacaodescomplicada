#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <math.h> //Fun��es matem�ticas
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Calcule as ra�zes da equa��oo de 2� o grau.
	Lembrando que:
	x = -b �raiz de delta/2a
	Onde
	delta = B^2 - 4ac
	E ax2 + bx + c = 0 representa uma equac�ao de 2 �
o grau.
	A variavel � a tem que ser diferente de zero. Caso seja igual, imprima a mensagem �Nao�
	e equac� � ao de segundo grau�. �
	� Se ? < 0, nao existe real. Imprima a mensagem � N~ao existe raiz.
	� Se ? = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz �unica.
	� Se ? = 0, imprima as duas ra�izes reais. 

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	float a, b, c, delta, x1, x2;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite o valor de a:");
	scanf("%f", &a);
	printf("Digite o valor de b:");
	scanf("%f", &b);
	printf("Digite o valor de c:");
	scanf("%f", &c);
	

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 
	
	//C�lculos matem�ticos
	if(a == 0){
		
		printf("\nN�o � uma ra�z quadrada");
		
	}else{
		
		delta = pow(b,2) - 4 * a * c;
		
		printf("O valor de delta � %f", delta);
		
	}

	/* Saida de dados */
	
	if(a != 0){

		if(delta < 0){
				
				printf("\nN�o existe ra�zes reais");
				
		}else{
				
			if(delta > 0){
					
				x1 = (-b + sqrt(delta)) / 2 * a;
					
				x2 = (-b - sqrt(delta)) / 2 * a;
					
				printf("\nx1 = %.2f", x1);
				printf("\nx2 = %.2f", x2);
					
			}else{
					
				x1 = (-b + sqrt(delta)) / 2 * a;
					
				printf("\nx1 = x2 = %.2f", x1);
				
			}
		}
	}
	
	// Exibe mensagem na tela

	/* Fim */ 
 
	//system("PAUSE"); //Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows 
	return 0;

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

