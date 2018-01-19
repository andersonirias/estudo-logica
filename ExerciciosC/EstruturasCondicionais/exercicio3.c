#include <stdio.h>
#include <stdlib.h>

main(){

  /*
    3. Fazer um programa para ler um número do usuário e determinar se este número é par ou não par. 
  */

  int x;

  printf("Digite um numero: ");
  scanf("%d",&x);
	
  x = x % 2;
	
  if(x == 0){

    printf("O numero e par");

  }else{

    printf("O numero e impar");

  }

}
