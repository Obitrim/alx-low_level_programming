#include "main.h"
/**
 * print_triangle - print triangle
 *
 * @size: size of triangle
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
