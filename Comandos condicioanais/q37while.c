#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	As tarifas de certo parque de estacionamento s�o as seguintes:
	
	� 1 a e 2 a hora - R$ 1,00 cada
	� 3 a e 4 a hora - R$ 1,40 cada
	� 5 a hora e seguintes - R$ 2,00 cada O numero de horas a pagar e sempre inteiro e arredondado por excesso. Deste modo, �
	quem estacionar durante 61 minutos pagara por duas horas, que � o mesmo que pagaria �
	se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida
	deste sao apresentados na forma de pares de inteiros, representando horas e minutos. �
	Por exemplo, o par 12 50 representara �dez para a uma da tarde�. Pretende-se criar um �
	programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela
	o prec�o cobrado pelo estacionamento. Admite-se que a chegada e a partida se dao com �
	intervalo nao superior a 24 horas. Portanto, se uma dada hora de chegada for superior �
	a da partida, isso n ` ao� e uma situac� � ao de erro, antes significar � a que a partida ocorreu no �
	dia seguinte ao da chegada.

*/

int main(){ // Fun��o obrigat�ria
   
	/* Declara��o de constantes ou vari�veis */
	int he, me, hs, ms, dfh, dfm;
	float valor;
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"pt-BR");
	printf("Digite a hora de chegada:");
	scanf("%d", &he);
	printf("Digite o minuto de chegada:");
	scanf("%d", &me);
	printf("Digite a hora de sa�da:");
	scanf("%d", &hs);
	printf("Digite o minuto de sa�da:");
	scanf("%d", &ms);

	
	if((hs >= 24 || he >= 24)){
		
		if((ms >= 60 || me >= 60)){
			
			while((hs >= 24 || he >= 24) && (ms >= 60 || me >= 60)){
				
				printf("Digite a hora de chegada:");
				scanf("%d", &he);
				printf("Digite o minuto de chegada:");
				scanf("%d", &me);
				printf("Digite a hora de sa�da:");
				scanf("%d", &hs);
				printf("Digite o minuto de sa�da:");
				scanf("%d", &ms);
				
			}
			
		}else{

			if((ms < 60 || me < 60)){
				
				while((hs >= 24 || he >= 24)){
					
					printf("Digite a hora de chegada:");
					scanf("%d", &he);
					printf("Digite o minuto de chegada:");
					scanf("%d", &me);
					printf("Digite a hora de sa�da:");
					scanf("%d", &hs);
					printf("Digite o minuto de sa�da:");
					scanf("%d", &ms);
					
				}
			}
		}
		
	}else{
			
		while((ms >= 60 || me >= 60)){
				
			printf("Digite a hora de chegada:");
			scanf("%d", &he);
			printf("Digite o minuto de chegada:");
			scanf("%d", &me);
			printf("Digite a hora de sa�da:");
			scanf("%d", &hs);
			printf("Digite o minuto de sa�da:");
			scanf("%d", &ms);	
		}
	}

	// Solicita que o usu�rio que entre com algum dado qualquer
	
	//Calculando o tempo de dura��o no estacionamento
	
	//Saiu no mesmo dia
	
	if(hs > he){
		if(ms >= me){
			
			dfh = hs - he;
			dfm = ms - me;
			
		}else{
		
			dfh = hs - he - 1;
			dfm = (ms + 60) - me;
		}
	}
	
	//Saiu no dia seguinte
	
	if(hs < he){
		if(ms >= me){
			
			dfh = (hs + 24) - he;
			dfm = ms - me;
			
		}else{
		
			dfh = (hs + 24) - he - 1;
			dfm = (ms + 60) - me;
			
		}
		
	}
	
	//Tratamento de exce��o
	
	//Se he = hs e ms > me ent�o significa que saiu no mesmo dia. Caso contr�rio significa que saiu no dia seguinte.
	if(hs == he){
		if(ms > me){
			
			dfh = hs - he;
			dfm = ms - me;
			
		}else{
			if(ms < me){
				
				dfh = (hs + 24) - he - 1;
				dfm = (ms + 60) - me;
				
			}else{
				
				//Se cair nesta condi��o significa que n�o entrou no estacionamento
				dfh = hs - he;
				dfm = ms - me;
				
				printf("\nN�o entrou no estacionamento");
			}
		}
	}
	
	//Imprindo a dura��o no estacionamento;
	
	if((hs == he) && (ms == me)){
		
	}else{
		
		printf("\nDura��o no estacionamento: %dh : %dmin", dfh, dfm);
		
	}
	
	//Arredondando o tempo e calculando o valor da tarifa que ser� paga pelo o tempo que ficou no estacionamento
	
	if((dfm % 60) == 0){
		if(dfh >= 1 && dfh <= 2){
			
			valor = dfh * 1.00;
			
		}else{
			if(dfh >= 3 && dfh <= 4){
				
				valor = dfh * 1.40;
				
			}else{
				
				valor = dfh * 2.00;
			}
			
		}
	}else{
		
		dfh++;
		
		if(dfh >= 1 && dfh <= 2){
			
			valor = dfh * 1.00;
			
		}else{
			if(dfh >= 3 && dfh <= 4){
				
				valor = dfh * 1.40;
				
			}else{
				
				valor = dfh * 2.00;
				
			}
			
		}
		
	}

	/* Fim */ 

	/* Saida de dados */
	
	if((hs == he) && (ms == me)){
		
	}else{
		
		printf("\nO valor da tarifa: R$%.2f", valor);
		
	}
	
	
	
	// Exibe mensagem na tela

	/* Fim */ 

	//system("clear||cls"); //Limpar a tela Windows e no LINUX   
	//system("PAUSE"); // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();". Apenas no Windows. 
	return 0; //

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

