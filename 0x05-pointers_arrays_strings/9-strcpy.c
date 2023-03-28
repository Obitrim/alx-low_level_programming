#include "main.h"
/**
 * _strcpy - copy string to destination
 * @dest: destination pointer
 * @src: src pointer
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
