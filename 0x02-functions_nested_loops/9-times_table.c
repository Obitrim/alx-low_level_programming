#include "main.h"
/**
 * times_table - print times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int upper_limit, i, j;

	upper_limit = 9;

	for (i = 0; i <= upper_limit; i++)
	{
		for (j = 0; j <= upper_limit; j++)
		{
			int result;

			result = i * j;
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
			}
			else if (j > 0)
			{
				_putchar(' ');
			}
			_putchar((result % 10) + '0');

			if (j < upper_limit)
			{
				_putchar(',');
				_putchar(' ');
			}
	

			if (j == upper_limit)
				_putchar('\n');
		}
	}
}
