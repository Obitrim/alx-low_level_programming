#include "main.h"
/**
 * _puts - print string
 * @str: pointer to a string
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int idx;

	idx = 0;
	while (*(str + idx) != '\0')
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}
