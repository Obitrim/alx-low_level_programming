#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num, i, largestPrime;

	num = 612852475143;

	for (i = 1; i * i <= num; i += 2)
	{
		if (num % i == 0)
		{
			largestPrime = num / i;
		}
	}

	printf("%lu\n", largestPrime);

	return (0);
}
