#include "main.h"
/**
 * _strncpy - concats n bytes from src to destination
* @dest: destination string
* @src: source string
* @n: number of bytes to concatenate
 *
 * Return: pointer to result;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
