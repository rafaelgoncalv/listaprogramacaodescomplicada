#include <stdio.h> // Fun��es de entrada e sa�da
#include <stdlib.h> // Fun��o padr�o
#include <locale.h> // Habilita o uso de acentua��o em palavras
#define anoatual 2008

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espa�o destinado a transcri��o do enunciado para n�o ficar olhando toda hora a lista

	Leia uma data de nascimento de uma pessoa fornecida atraves de tr � es n � umeros inteiros: �
Dia, Mes e Ano. Teste a validade desta data para saber se esta � e uma data v � alida. Teste �
se o dia fornecido e um dia v � alido: dia � > 0, dia = 28 para o mes de fevereiro (29 se o �
ano for bissexto), dia = 30 em abril, junho, setembro e novembro, dia = 31 nos outros
meses. Teste a validade do mes: m � es� > 0 e mes� < 13. Teste a validade do ano: ano =
ano atual (use uma constante definida com o valor igual a 2008). Imprimir: �data valida� �
ou �data invalida� no final da execuc� � ao do programa. . 
 

*/

int main() // Fun��o obrigat�ria
   {
	/* Declara��o de constantes ou vari�veis */
	
	int dia,mes,ano;
	
	/* Fim */

	/* Entrada de dados */
	
	setlocale(LC_ALL,"");
	printf("Digite o dia:");
	scanf("%d",&dia);
	printf("Digite o m�s:");
	scanf("%d",&mes);
	printf("Digite o ano:");
	scanf("%d",&ano);

	// Solicita que o usu�rio que entre com algum dado qualquer

	/* Fim */ 

	/* Saida de dados */
	
	if(ano%400==0 && ano%4==0 && ano%100==0 && ano<=anoatual){
		
		if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
			if(dia>=1 && dia<=31){
				
				printf("A data %d-%d-%d � v�lida",dia,mes,ano);
			}else{
				printf("O dia digitado � inv�lido");
			}
		}else{
			if(mes==4 || mes==6 || mes== 9 || mes== 11){
				
				if(dia>=1 && dia<=30){
					
					printf("O dia %d-%d-%d � v�lida",dia,mes,ano);
				}else{
					
					printf("O dia digitado � inv�lido");
				}
			}else{
				if(mes==2){
					if(dia>=1 && dia<=29){
						
						printf("A data %d-%d-%d � v�lida",dia,mes,ano);
						
					}else{
						
						printf("O dia digitado � inv�lido");
					}
					
				}else{
					
					printf("O m�s digitado � inv�lido");
				}
			}
		}
	}else{
		
		if(ano<=anoatual){
			

			if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
						if(dia>=1 && dia<=31){
							
							printf("A data %d-%d-%d � v�lida",dia,mes,ano);
						}else{
							printf("O dia digitado � inv�lido");
						}
					}else{
						if(mes==4 || mes==6 || mes== 9 || mes== 11){
							
							if(dia>=1 && dia<=30){
								
								printf("A data %d-%d-%d � v�lida",dia,mes,ano);
							}else{
								
								printf("O dia digitado � inv�lido");
							}
						}else{
							if(mes==2){
								if(dia>=1 && dia<=28){
									
									printf("A data %d-%d-%d � v�lida",dia,mes,ano);
									
								}else{
									
									printf("O dia digitado � inv�lido");
								}
								
							}else{
								
								printf("O m�s digitado � inv�lido");
							}
						}
					}
			
		}else{
			
			printf("O ano digitado � inv�lido");
		}
		
		
	}
	
	// Exibe mensagem na tela

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele n�o feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso ir� fazer apenas pausar o programa para na hora da exercu��o
		    do programa n�o fechar instantaneamente */
	


   } // Fim 

