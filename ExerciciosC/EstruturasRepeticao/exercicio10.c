#include <stdio.h>
#include <stdlib.h>

main(){
	
  //10. Fazer um programa para receber um número inteiro do usuário e determinar se este número é primo ou não.

  int nun,x=1,i=0,l;
	
  printf("Digite um numero: ");
  scanf("%d",&nun);
	
  while(x<=nun){
		
    l= nun % x;
		
    if(l==0){
			
      i++;

    }

    x++;

  }
	
  if(i>2){
		
    printf("O numero não é primo \n");
		
  }else{
		
    printf("O numero é primo \n ");
		
  }
		
}
