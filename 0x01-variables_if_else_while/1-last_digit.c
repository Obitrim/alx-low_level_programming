#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* how to set line numbers by default for my vi editor
*/
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	if (lastDigit == 0)
		printf("Last digit of %d is and is 0\n", lastDigit);
	else if (lastDigit > 5)
		printf("Last digit of %d is and is greater than 5\n", lastDigit);
	else
		printf("Last digit of %d is and is less than 6 and not 0\n", lastDigit);

	return (0);
}
