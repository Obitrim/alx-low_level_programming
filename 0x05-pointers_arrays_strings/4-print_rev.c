#include "main.h"
/**
 * print_rev - Entry point
 * @s: string variable
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count > -1)
	{
		_putchar(*(s + count));
		count--;
	}
}
