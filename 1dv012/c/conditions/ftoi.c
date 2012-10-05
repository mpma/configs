#include <stdio.h>

// Converts float to integer and rounds it correctly
main()
{
  int a;
  float b;

  a = 2;
  b = 3.6;

  a = a + (int)(b + 0.5);
  printf("%d\n", a);
}
