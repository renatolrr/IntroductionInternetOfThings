```
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x,y,z,cont;

  x=0;
  y=1;
 
  printf("0\n1\n",z);
 
  for (cont=1;cont<=4;cont=cont+1)
  {
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
  }
```
