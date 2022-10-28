/*
 ============================================================================
 Name        : ficha2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	/*
	// ==============================Alinea 1 //
  int i;
  float f;
  scanf ("%d%f",&i,&f);
  printf ( "val of i is %d\n val of f is %f\n" ,i,f);
*/

   int lado = 1;
   int altura = 3;
   int perimetro = 2*(lado+altura);
   printf ("o perimetro do retangulo e: %i \n",perimetro );


  //=========================Alinea 3//

  int a=5;
  int b=3;
  int c=7;
  int d=10;
  int e=1;
  float media= (a+b+c+d+e)/5.0;
  printf("a media e: %f \n", media);


  //===========alinea 4//

  float fahr= 212;
  float celsius = (fahr - 32 / 2.8);
  printf("%f.2 fahrenheit sao %f.2 celsius \n", fahr , celsius);

  //=========== alinea 5//

  float distancia = 370;
  float consumo = 40;
  float kms = 100;

  float mediacomb= (kms * consumo)/distancia;

  printf ("a media de combustivel e aos %f é %f \n", kms, mediacomb);

  int horas=8;
  int min=22;
  int segundos=10;
  int total= horas*3600 + min*60 + segundos;
  printf ("total %d", total);

  return EXIT_SUCCESS;







}





