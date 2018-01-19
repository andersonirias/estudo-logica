#include <stdio.h>
#include <stdlib.h>

int main(){

  /*
    12. Fazer um programa para receber dois números do usuário e calcular
    o seu MDC utilizando o método de Euclides. O programa deve continuar
    pedindo dois números até que 0 e 0 sejam fornecidos.
  */

  int a,b,r,q,x;

  do{
    
    printf("Digite um numero: ");
    scanf("%d",&a);

    printf("Digite um numero: ");
    scanf("%d",&b);

    if(a == 0 || b == 0){
 
      if(b > a){

        x = a;
        a = b;
        b = x;

      }
    
      do{
 
        q = a / b;
        r = a % b;
      
        x = b;

        a = b;
        b = r;  

      }while(r !=0);

      printf("O MDC é: %d \n", x);

    }  

  }while(a > 0 && b > 0);

}
