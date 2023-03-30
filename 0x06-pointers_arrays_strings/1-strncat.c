#include "main.h"
/**
 * _strncat - concats n bytes from src to destination
* @dest: destination string
* @src: source string
* @n: number of bytes to concatenate
 *
 * Return: pointer to result;
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;

	p = dest;
	while (*p != '\0')
	{
		p++;
	}
	
	while ((*src != '\0') && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';
	return (dest);
}
