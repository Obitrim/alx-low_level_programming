#include "main.h"
/**
 * print_square - print square
 *
 * @size: size of square
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		int j;

		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
