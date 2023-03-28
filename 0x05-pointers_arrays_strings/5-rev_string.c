#include "main.h"
/**
 * rev_string - reverse string
 * @s: string variable
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char temp;

	while (*end)
	{
		end++;
	}

	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
