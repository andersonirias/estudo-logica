#include <stdio.h>
#include <stdlib.h>

main(){

  int x;
  double y;

  scanf("%i", &x);
  scanf("%lf", &y);
  
  printf("%.3lf km/l\n", x / y);

}
