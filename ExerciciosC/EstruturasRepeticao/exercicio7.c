#include <stdio.h>
#include <stdlib.h>

main(){

  /*
    7. O número 3025 possui a seguinte característica: 30 + 25 = 55   -> 55*55 = 3025.
    Fazer um programa para obter todos os números de 4 algarismos com a mesma característica do número 3025. 
  */

  int x=1000,m,n,l,c;
	
  while(x < 10000){
		
    m = x / 100;
    n = x % 100;
		
    l = m + n;
    c = l * l;

    if(x == c){
			
      printf("O numero %d segue o mesmo padrao que o 3025 \n",x);
      x++;

    }else{

      x++;

    }

  }
	
}
	
	
