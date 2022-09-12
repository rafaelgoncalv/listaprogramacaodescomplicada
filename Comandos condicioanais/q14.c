#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

 A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo
de 0 ate 10, respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral
e a um exame final. A m�dia das tr�s notas mencionadas anteriormente obedece aos
pesos: Trabalho de Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno esta reprovado (m�dia entre 0 e 2,9), de �
recupera��o (entre 3 e 4,9) ou se foi aprovado. Fa�a todas as verificac�es nececess�rias.  
 

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	float nota1,nota2,nota3,mediap;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a nota do trabalho de laborat�rio:");
	scanf("%f",&nota1);
	printf("Digite a nota da avalia��o semestral:");
	scanf("%f",&nota2);
	printf("Digite a nota do exame final:");
	scanf("%f",&nota3);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* C�lculos matem�ticos */
	
	mediap = (nota1*2 + nota2*3 + nota3*5)/10;

	/* Saida de dados */
	
	if((nota1>=0 && nota1<=10) && (nota2>=0 && nota2<=10) && (nota3>=0 && nota3<=10)){
		if(mediap>=5){
			
			printf("\nA m�dia ponderada � %.2f",mediap);
			printf("\nAprovado");
			
		}else{
			if(mediap>=3 && mediap<=4.9){
				
				printf("\nA m�dia ponderada � %.2f",mediap);
				printf("\nRecupera��o");
				
			}else{
				
				printf("\nA m�dia ponderada � %.2f",mediap);
				printf("\nReprovado");
				
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

