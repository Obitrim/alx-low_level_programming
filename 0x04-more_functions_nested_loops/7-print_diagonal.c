#include "main.h"
/**
 * print_diagonal - print diagonal
 *
 * @n: number of \ to print
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		int j;

		for (j = 1; j <= i; j++)
		{
			if (j < i)
			{
				_putchar(' ');
				continue;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
