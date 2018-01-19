#include <stdio.h>
#include <stdlib.h>

main(){

  //9. Fazer um programa para mostrar todos os números perfeitos entre 1 e 100. 

  int y,z,l;

  for(int x = 2; x < 100; x++){

    y=1;
    l=0;

    while(x>y){
	  
      z= x % y;
	
      if(z==0){

        l = l + y;
		
      }	
		
      y++; 

    }

    if(l==x){
		
      printf("O numero: %d e um numero perfeito \n ", x);
		
    }

  }

}
