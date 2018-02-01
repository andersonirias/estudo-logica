#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b){

  if(a % b == 0)
    return b;
  else
    mdc(b, (a % b));

}

main(){

  int x[4], n, a, b, r;
  char op[3];

  scanf("%d", &n);

  while(n > 0){

    scanf("%d %c %d %c %d %c %d", &x[0], &op[0], &x[1], &op[1], &x[2], &op[2], &x[3]);

    if(op[1] == '+'){
      a = (x[0] * x[3]) + (x[2] * x[1]);
      b = x[1] * x[3];
    }else if(op[1] == '-'){
      a = (x[0] * x[3]) - (x[2] * x[1]);
      b = x[1] * x[3];
    }else if(op[1] == '*'){
      a = x[0] * x[2];
      b = x[1] * x[3];
    }else if(op[1] == '/'){
      a = x[0] * x[3];
      b = x[2] * x[1];
    }

    if(a > b)
      r = mdc(a, b);
    else
      r = mdc(b, a);

    if(r < 0)
      r = r * (-1);

    printf("%d/%d = %d/%d\n", a, b, (a / r), (b / r));

    n--;

  }

}

