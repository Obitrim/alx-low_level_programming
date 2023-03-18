#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i; j < 100; j++)
		{
			int tens1, units1, tens2, units2;

			tens1 = i / 10;
			units1 = i % 10;
			tens2 = j / 10;
			units2 = j % 10;

			/* print first number */
			putchar('0' + tens1);
			putchar('0' + units1);
			putchar(' ');
			putchar('0' + tens2);
			putchar('0' + units2);

			/* separate with comma and space */
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
