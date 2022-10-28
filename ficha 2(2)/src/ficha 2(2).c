/*
 ============================================================================
 Name        : ficha.c
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
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

    float p1 = 20;
    float p2 = 15;
    float fq = 10;
    float nf= (p1*0.3)+(p2*0.3)+(fq*0.4);

    printf("nota final e: %f \n", nf);

   float base=5;
   float altura=7;
   float area=base*altura;

   printf("a area do retangulo e: %f \n", area);

   float comprimento=8;
   float largura=4;
   float altura2=10;
   float volume= comprimento*largura*altura2;


   printf("o volume do paralelepipedo e: %f \n", volume);

   int x1=1;
   int y1=2;

   int x2=3;
   int y2=3;

   pow(x2 - x1, 2);
   pow(y2 - y1, 2);

  float distance= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
   printf ("%f \n", distance);


   return EXIT_SUCCESS;


}
