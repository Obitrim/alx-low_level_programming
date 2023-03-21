#include "main.h"
/**
 * jack_bauer - prints minutes of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hours, minutes, i, j;

	hours = 23;
	minutes = 59;

	for (i = 0; i <= hours; i++)
	{
		for (j = 0; j <= minutes; j++)
		{
			if (i < 10)
				_putchar('0');
			
			if (i > 9)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
			_putchar(':');

			if (j < 10)
				_putchar('0');
			
			if (j > 9)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
