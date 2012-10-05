#include <stdio.h>

int
main(int argc)
{
  printf("%d\n", argc);
  int f;
  for(f = 0; f <= argc; f++)
    printf("Hello world!\n");

  return 0;
}
