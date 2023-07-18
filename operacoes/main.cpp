#include <stdlib.h>
#include <stdio.h>

int main(){
float op1,op2;

char operacao;

	printf("\n**Este prog. executa as 4 operacoes aritmeticas**");
		printf("\n**********************************************");

		printf("\nDigite o primeiro operando: ");
			scanf("%f",&op1);

			printf("\nDigite o segundo operando: ");
				scanf("%f",&op2);

				printf("\nDigite o operador: (+, -, *, /): \n");
					fflush(stdin);

				scanf("%c",&operacao);

				switch (operacao){
					
					case '+':
						printf(" Soma\n%.2f + %.2f eh igual a: %.2f\n\n", op1, op2, op1+op2);
							break;

					case '-':
						printf(" Sub.\n%.2f - %.2f eh igual a: %.2f\n\n", op1, op2, op1-op2);
							break;

					case '*':
						printf(" Mult.\n%.2f * %.2f eh igual a: %.2f\n\n", op1, op2, op1*op2);
							break;

					case '/':
						printf(" Divisao\n%.2f / %.2f eh igual a: %.2f\n\n", op1, op2, op1/op2);
							break;

					default:
						printf("%c\nOperacao Desconhecida\n\n", operacao);}

			system("pause");}
                  
			
	

		




