#include <stdio.h>
#include <stdlib.h>

main(){

  int cod1, cod2, n1, n2;
  double v1, v2;

  scanf("%d%d%lf", &cod1, &n1, &v1);
  scanf("%d%d%lf", &cod2, &n2, &v2);

  printf("VALOR A PAGAR: R$ %.2lf\n", ((n1 * v1) + (n2 * v2)));

}
