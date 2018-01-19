#include <stdio.h>
#include <math.h>

main(){

  int a, m, d;

  scanf("%d", &d);

  if(d >= 365){

    a = d / 365;
    d = d % 365;

  }else{

    a = 0;

  }

  if(d >= 30){

    m = d / 30;
    d = d % 30;

  }else{

    m = 0;

  }

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);

}
