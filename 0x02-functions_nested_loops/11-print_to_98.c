#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print to 98
 *
 * @n: staring number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int upper_limit, lower_limit;

	lower_limit = n;
	upper_limit = 98;

	if (n == upper_limit)
	{
		printf("%d", n);
	}
	else if (n > upper_limit)
	{
		while (lower_limit >= upper_limit)
		{
			printf("%d", lower_limit);
			lower_limit--;
			if (lower_limit != upper_limit)
				printf(", ");
		}
	}
	else
	{
		while (lower_limit <= upper_limit)
		{
			printf("%d", lower_limit);
			lower_limit++;
			if (lower_limit != upper_limit + 1)
				printf(", ");
		}
	}
	printf("\n");
}
