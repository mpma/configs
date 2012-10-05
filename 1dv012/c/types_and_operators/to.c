#include <stdio.h>

// Demonstrating various mathematical operations and type conversions

main()
{
  printf("Add:\n\t%d + %d = %d\n", 7, 9, (7+9));
  printf("Sub:\n\t%.2f - %.2f = %.2f\n", 19.23, 16.11, (19.23-16.11));
  printf("Mult:\n\t%.3f * %.3f = %.3f\n", 0.333, 0.666, (0.333*0.666)); 

  printf("\nBad type conversion\n");
  printf("%d (INT) + %.3f (FLOAT) = %.4f (FLOAT)\n", 3, 3.333, (3 + 3.33));

  float x = 1.9, y = 2.4;
  int a, b;

  a = (int)(x+0.5);
  b = (int)(y+0.5);

  printf("Value of x:%f\n", x);
  printf("Value of y:%f\n", y);
  printf("Value of a:%d\n", a);
  printf("Value of b:%d\n", b);
}
