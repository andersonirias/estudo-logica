#include <stdio.h>
#include <stdlib.h>

main(){

  /*
    2. Fazer um programa para receber 3 valores inteiros do usuário
    e mostrar a sua média (que pode não ser inteira).
  */

  int x,y,z;
  float m;

  printf("Digite 3 numeros: ");
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
	
  m = (x + y + z) / 3;
	
  printf("A media e: %f",m );

}
