#include <stdio.h>
#include <math.h>

main(){

  int s, h, m;

  scanf("%d", &s);

  if(s >= 3600){

    h = s / 3600;
    s = s % 3600;

  }else{

    h = 0;

  }

  if(s >= 60){

    m = s / 60;
    s = s % 60;

  }else{

    m = 0;

  }

  printf("%d:%d:%d\n", h, m, s);

}
