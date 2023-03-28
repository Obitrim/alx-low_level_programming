#include "main.h"
/**
 * print_rev - Entry point
 * @s: string variable
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int count, i;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}

	count--;
	for (i = count; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
