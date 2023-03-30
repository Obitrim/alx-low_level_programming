#include "main.h"
/**
 * _strcat - append src string to destination string
 *
 * @dest: destination string pointer
 * @src: source string pointer
 *
 * Return: pointer to a character
 */
char *_strcat(char *dest, char *src)
{
	char *p;

	p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
