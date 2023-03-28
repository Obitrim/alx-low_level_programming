#include "main.h"
/**
 * puts2 - print every other character starting with first
 * character
 *
 * @str: string to print
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
