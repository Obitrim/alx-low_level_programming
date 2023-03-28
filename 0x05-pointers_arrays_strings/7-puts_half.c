#include "main.h"
/**
 * puts_half - print half of string
 * @str: string to print
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int idx, startIdx, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
		startIdx = (len - 1) / 2;
	else
		startIdx = len / 2;

	for (idx = startIdx; idx <= len; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
