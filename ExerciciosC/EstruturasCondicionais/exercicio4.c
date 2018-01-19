#include <stdio.h>
#include <stdlib.h>

main(){

  /*
    4. Fazer um programa  para receber valores inteiros X, Y e Z do usuário
    e determinar se estes valores podem formar os lados de um triângulo. Em
    caso afirmativo, informar se o triângulo é eqüilátero, isósceles ou escaleno.
  */

  int x,y,z;
	
  printf("Digite o valor dos lados do triangulo: ");
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);

  if(x + y < z || x + z < y || y + z < x ){
	
    printf("Os lados nao podem formar um triangulo");

  }else{

    printf("Os lados podem ser um triangulo");
	
    if(x == y && x == z){

      printf("O triangulo e equilatero!");

    }else if(x == y || x == z){

      printf("O triangulo e isoceles!");

    }else if(x != y && x != z){

      printf("O triangulo e escaleno");

    }
	
  }
	
}
