#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

main()
{
  // IF
  int a = 10, b = 5;

  if(a > b)
    printf("%d is larger than %d\n", a, b);

  // BOOLEAN
  bool t = true, f = false;

  printf("\n");

  while(t){
    if(a == 0)
      t = false;
    printf("%d\n", a);
    a--;
  }
}
