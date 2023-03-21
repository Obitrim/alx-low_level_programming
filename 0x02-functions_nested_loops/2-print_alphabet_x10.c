#include "main.h"
/**
 * print_alphabet_x10 - print alphabets
 *
 * Print all lowercase alphabets 10 times
 *
 * Return: lowercase alphabets 10x
 */
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
 * Return: Always 0 Success
 */
void print_alphabet_x10(void)
{
	int index;

	for (index = 0; index <= 9; index++)
	{
		print_alphabet();
	}
}
