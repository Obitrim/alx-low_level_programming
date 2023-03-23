#include "main.h"
/**
 * print_line - prints a line
 *
* @n: number of _ to print
*
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
