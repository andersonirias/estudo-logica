#include <stdio.h>
#include <stdlib.h>

main(){

  /*
    1. Fazer um programa para receber um número inteiro de segundos do usuário e 
    imprimir a quantidade correspondente  em horas, minutos e segundos. 
  */

  int x=0;
  int hora, min, seg;

  printf("Digite o numero de segundos: ");
  scanf("%d",&x);
	
  hora = x / (60*60);
  min = x % (60*60);
  seg = min % 60;
  min = min / 60;
	
  printf("horas: %d minutos: %d segundos: %d", hora,min,seg);
	
}
