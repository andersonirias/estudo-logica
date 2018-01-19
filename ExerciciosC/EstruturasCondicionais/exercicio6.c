#include <stdio.h>
#include <stdlib.h>

main(){

  /* 
    6. Fazer um programa que recebe um símbolo de operação do usuário
    (+, -, / ou *) e dois números reais. O programa deve retornar o resultado
    da operação recebida sobre estes dois números.
  */

  float x,y;
  char oper;
	
  printf("Digite o simbolo da operacao: (+ , - , / ou *)");
  scanf("%c",&oper);

  printf("Digite dois numeros: ");
  scanf("%f",&x);
  scanf("%f",&y);

  if(oper == '+'){
	
    printf("A soma e: %f",x + y);

  }else if(oper == '-'){
	
    printf("A subtracao e: %f",x - y);

  }else if(oper == '/'){

    printf("A Divisao e %f",x / y);
	
  }else if(oper == '*'){

    printf("A Multiplicacao e %f", x * y);

  }else{

    printf("Digite um operador valido");

  }

}
