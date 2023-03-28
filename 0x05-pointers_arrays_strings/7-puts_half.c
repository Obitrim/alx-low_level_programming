#include "main.h"
/**
 * puts_half - print half of string
 * @str: string to print
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int idx, startIdx, halfLen, len;
	char *p = str;

	len = 0;
	while (*p != '\0')
	{
		len++;
		p++;
	}

	halfLen = (len + 1) / 2;
	startIdx = (len % 2 == 0) ? halfLen : halfLen - 1;

	for (idx = startIdx; idx <= len; idx++)
	{
		_putchar(str[idx]);
	}
}
