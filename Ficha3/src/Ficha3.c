/*
 ============================================================================
 Name        : Ficha3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	/*
	 float p1 = 14;
	 float p2 = 11;
	 float freq = 12;

	 float notaFinal = (p1*0.3) + (p2*0.3) + (freq*0.4);

	 if (notaFinal < 9.5){
	 puts("reporovado");
	 }
	 else{
	 puts("aprovado");
	 }
	 */
	/*
	int altura = 168;


	if (altura < 150) {
		printf("pessoa baixa");
	} else if (altura < 180) {
		printf("pessoa média");
	} else {
		printf("estatura alta");
	}
	*/
	/*
		int mes = 2;

		if (mes==1){
			printf("janeiro");
		}
		else if (mes==2){
			printf("fevreiro");
		}
		else if (mes==3){
			printf("março");
		}
		else if (mes == 4){
			printf("abril");
		}
		else if (mes == 5){
			printf("maio");
		}
		else if (mes == 6){
			printf("junho");
		}
		else if (mes == 7){
			printf("julho");
		}
		else if (mes == 8){
			printf("agosto");
		}
		else if (mes == 9){
			printf("setembro");
		}
		else if (mes == 10){
			printf("outubro");
		}
		else if (mes == 11){
			printf("novembro");
		}
		else if (mes == 12){
			printf("dezembro");
		}

	*/

	/*
	float operando1 = 2;
	float operando2 = 4;
	char operador = '^';

	float resultado = 0;

	if (operador == '+'){
		resultado = operando1 + operando2;
	}
	else if (operador == '-'){
		resultado = operando1 - operando2;
	}
	else if (operador == '*'){
		resultado = operando1 * operando2;
	}
	else if (operador == '/'){
		resultado = operando1 / operando2;
	}
	else if (operador == '^'){
		resultado = pow(operando1, operando2);
	}
	printf("%f %c %f = %f", operando1, operador, operando2, resultado);
*/
	/*int soma = 0;
	int max = 100;
	int i = 1;
	while (i <= max){
		soma = soma + i;
		i++;
	}
	printf("soma até %i é: %i", max, soma);*/

	/*int multiplo = 5;
	int max = 20;
	int i = 1;

	while (i < max){
		if (i % multiplo == o){
			printf("%i \n", i);
		}
		i += multiplo;
	}*/

	 int n=5;
	 int factorial = 1;

	 while(n >= 1){
		 	 factorial *= n;
		 	 n--;
	 }
	 printf("%i! e: %i \n", n, factorial);

	return EXIT_SUCCESS;
 }


