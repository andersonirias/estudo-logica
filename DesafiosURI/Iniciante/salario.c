#include <stdio.h>
#include <stdlib.h>

main(){

  int n, h;
  double r;

  scanf("%d", &n);
  scanf("%d", &h);
  scanf("%lf", &r);

  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, (h * r));

}
