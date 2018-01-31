#include <stdio.h>

main(){
  
  float d, m;
  int v;

  scanf("%f", &d);

  v = d;
  m = (d - v) * 100;

  printf("NOTAS:\n");

  if(v >= 100){

    printf("%d nota(s) de R$ 100.00\n", v / 100);
    v = v % 100;

  }else{
   
    printf("0 nota(s) de R$ 100.00\n");

  }

  if(v >= 50){

    printf("%d nota(s) de R$ 50.00\n", v / 50);
    v = v % 50;

  }else{

    printf("0 nota(s) de R$ 50.00\n");

  }

  if(v >= 20){

    printf("%d nota(s) de R$ 20.00\n", v / 20);
    v = v % 20;

  }else{

    printf("0 nota(s) de R$ 20.00\n");

  }

  if(v >= 10){

    printf("%d nota(s) de R$ 10.00\n", v / 10);
    v = v % 10;

  }else{

    printf("0 nota(s) de R$ 10.00\n");

  }

  if(v >= 5){

    printf("%d nota(s) de R$ 5.00\n", v / 5);
    v = v % 5;

  }else{

    printf("0 nota(s) de R$ 5.00\n");

  }

  if(v >= 2){

    printf("%d nota(s) de R$ 2.00\n", v / 2);
    v = v % 2;

  }else{

    printf("0 nota(s) de R$ 2.00\n");

  }

  printf("MOEDAS:\n");

  if(v >= 1){

    printf("%d moeda(s) de R$ 1.00\n", v / 1);

  }else{

    printf("0 moeda(s) de R$ 1.00\n");

  }

  if(m >= 50){

    printf("1 moeda(s) de R$ 0.50\n");
    m = m - 50;

  }else{

    printf("0 moeda(s) de R$ 0.50\n");

  }

  if(m >= 25){

    printf("1 moeda(s) de R$ 0.25\n");
    m = m - 25;

  }else{

    printf("0 moeda(s) de R$ 0.25\n");

  }

  if(m >= 10){
    
    int i = 0;

    while(m >= 9.5){
      i++;
      m = m - 10;
    }

    printf("%d moeda(s) de R$ 0.10\n", i);

  }else{

    printf("0 moeda(s) de R$ 0.10\n");

  }

  if(m >= 5){

    printf("1 moeda(s) de R$ 0.05\n");
    m = m - 5;

  }else{

    printf("0 moeda(s) de R$ 0.05\n");

  }

  if(m >= 1){

    int i = 0;

    while(m >= 0.5){
      i++;
      m = m - 1;
    }

    printf("%d moeda(s) de R$ 0.01\n", i);

  }else{

    printf("0 moeda(s) de R$ 0.01\n");

  }

}
