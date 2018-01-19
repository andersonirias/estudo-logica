#include <stdio.h>
#include <stdlib.h>

int main(){

  //11. Fazer um programa para receber um número do usuário e decompô-lo em fatores primos.

  int nun;
	
  printf("Digite um numero: ");
  scanf("%d",&nun);

  while((nun % 2) == 0){
    
    printf("Numero: %d, Divisor primo 2 \n", nun);
    nun = nun / 2;

  }

  while((nun % 3) == 0){

    printf("Numero: %d, Divisor primo 3 \n", nun);
    nun = nun / 3;

  }

  while((nun % 5) == 0){

    printf("Numero: %d, Divisor primo 5 \n", nun);
    nun = nun / 5;

  }

  while((nun % 7) == 0){

    printf("Numero: %d, Divisor primo 7 \n", nun);
    nun = nun / 7;

  }

  while((nun % 11) == 0){

    printf("Numero: %d, Divisor primo 11 \n", nun);
    nun = nun / 11;

  }

  if(nun != 1){

    printf("Numero: %d, Divisor primo %d \n", nun,nun);   
    nun = nun / nun;

  }

}
