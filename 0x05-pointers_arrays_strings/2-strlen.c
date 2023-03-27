#include "main.h"
/**
 * _strlen - print string length
 * @s: pointer to character
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
