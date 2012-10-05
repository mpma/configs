#include <stdio.h>

// converts lowercase to uppercase
main()
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxz";
  int i;

  printf(alphabet);
  printf("\n\n");

  // there's a 4 byte difference between lower- and uppercase
  for(i = 0; i <= sizeof(alphabet)-2; i++)
    alphabet[i] = alphabet[i] - 32;

  printf(alphabet);
  printf("\n");
}
