#include "main.h"

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always nothing
 */
void print_alphabet_x10(void)
{
	int index;

	for (index = 0; index <= 10; index++)
	{
		print_alphabet();
	}
}
