#include <stdio.h>
#include <stdlib.h>

main(){

  char nome;
  double s, v;

  scanf("%s", &nome);
  scanf("%lf", &s);
  scanf("%lf", &v);

  printf("TOTAL = R$ %.2lf\n", (s + ((v * 15) / 100)));

}
