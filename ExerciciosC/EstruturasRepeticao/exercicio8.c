#include <stdio.h>
#include <stdlib.h>

main(){

  //8. Fazer um programa para mostrar os 100 primeiros termos da série de Fibonacci.

  int x=1,y=1,z;
	
  printf("N° 1 da sequencia = %d \n", x);
  printf("N° 2 da sequencia = %d \n", y);

  for(z=3; z <= 100; z++){
		
    x = x + y;
    printf("N° %d da sequencia = %d \n", z,x);
    z++;

    y = x + y;
    printf("N° %d da sequencia = %d \n", z,y);
		
  }

}
		
