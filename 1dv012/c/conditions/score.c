#include <stdio.h>

// check test scores and grades students
main()
{
  int max = 100;
  
  float score;
  
  float g1 = 0.5;   // 3 = G
  float g2 = 0.67;  // 4 = VG
  float g3 = 0.84;  // 5 = MVG


  score = 20;
  score = score / max;

  // Grade 3 and FAIL
  if(score >= 0.5 && score < 0.67)
    printf("CONGRATULATIONS, you got grade 3\n");
  else if(score < 0.5)
    printf("Sorry, you failed the test\n");

  // Grade 4
  if(score >= 0.67 && score < 0.84)
    printf("CONGRATULATIONS, you got grade 4\n");

  // Grade 5
  if(score >= 0.84)
    printf("CONGRATULATIONS you got grade 5\n");
}
