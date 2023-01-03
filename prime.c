/*
 *
 * Calculate prime numbers (Simon Grischek)
 *
 */


#include <stdio.h>
#include <stdbool.h>

void main()
{

  int i, j;
  int const start = 300;
  bool prime;
    
  printf("%i ", start);

  for (i = start; i > 1; i--) {

    prime = true;
    j = i-1;

    do {
       if(i%j == 0) {
         prime = false;
       }
       j--;
    } while (prime && (j > 1));
              
    if (prime) {
      printf("| %i ", i);
    }
  }
  if (start>=2)
	printf("| 2 ");
  printf("|\n");

}

