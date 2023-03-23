#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long i;
	unsigned long num, largestPrime;

	largestPrime = INT_MIN;
	num = 612852475143;

	while (num % 2)
	{
		num /= 2;
		largestPrime = 2;
	}

	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			if (i > largestPrime)
				largestPrime = i;
			num /= i;
		}
	}

	if (num > 2 && num > largestPrime)
		largestPrime = num;

	printf("%lu\n", largestPrime);

	return (0);
}
