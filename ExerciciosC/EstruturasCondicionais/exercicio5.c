#include <stdio.h>
#include <stdlib.h>

main(){

  /*
    5. Fazer um programa que recebe 3 valores não inteiros do
    usuário e mostra o maior deles, o menor deles e a média.
  */

  float x,y,z;
	
  printf("Digite 3 valores: ");
  scanf("%f",&x);
  scanf("%f",&y);
  scanf("%f",&z);
	
  if(x > y && x > z){

    printf("O %f e o maior",x);

  }else if(y > x && y > z){

    printf("o %f  e o maior",y);

  }else if(z > x && z > y){

    printf("O %f e o maior",z);

  }
	
  if(x < y && x < z){

    printf("O %f e o menor",x);

  }else if(y < x && y < z){

    printf("O %f e o menor",y);

  }else if(z < x && z < y){
	
    printf("O %f e o menor",z);

  }

  printf("A media e: %f",(x + y + z) / 3);

}
