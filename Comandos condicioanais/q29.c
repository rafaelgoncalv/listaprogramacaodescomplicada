#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <math.h> //Fun��es matem�ticas
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Fac�a uma prova de matematica para crianc�as que est � ao aprendendo a somar n � umeros �
inteiros menores do que 100. Escolha numeros aleat�rios entre 1 e 100, e mostre na �
tela a pergunta: qual e a soma de � a + b, onde a e b sao os n � umeros aleat � orios. Pec�a a �
resposta. Fac�a cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
corretas, alem de quantas vezes o aluno acertou.

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	
	int a, b, resp, qtd;
	//Inicializando a vari�vel
	qtd = 0;
	
	/* Fim */ 


	// Entrada de daos
	
	//Primeira pergunta
	a = rand() % 100;
	b = rand() % 100;
	printf("Quanto � %d + %d?", a, b);
	scanf("%d", &resp);
	
	if(resp == a + b){
		
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        
		qtd++;
        
	}else{
		
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
        
	}
	
	//Segunda pergunta
	a = rand() % 100;
	b = rand() % 100;
	printf("Quanto � %d + %d?", a, b);
	scanf("%d", &resp);
	
	if(resp == a + b){
		
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        
        qtd++;
        
	}else{
		
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
	}

	//Terceira pergunta
	a = rand() % 100;
	b = rand() % 100;
	printf("Quanto � %d + %d?", a, b);
	scanf("%d", &resp);
	
	if(resp == a + b){
		
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        
        qtd++;
        
	}else{
		
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
	
	}

	//Quarta pergunta
	a = rand() % 100;
	b = rand() % 100;
	printf("Quanto � %d + %d?", a, b);
	scanf("%d", &resp);
	
	if(resp == a + b){
		
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        
		qtd++;
		
	}else{
        
		printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
	
	}

	//Quinta pergunta
	a = rand() % 100;
	b = rand() % 100;
	printf("Quanto � %d + %d?", a, b);
	scanf("%d", &resp);
	
	if(resp == a + b){
		
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        
		qtd++;
		
	}else{
        
		printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
	
	}
	
	//Sa�da de dados
	printf("+---------------------------+\n");
    printf("| Voc� acertou %d questoes!  |\n", qtd);
    printf("+---------------------------+\n\n");
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows.
	return 0; 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da execu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 
