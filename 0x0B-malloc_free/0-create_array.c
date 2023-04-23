#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 * @size: size of array
* @c: initialization character
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *block;
	unsigned int i;

	if (size == 0)
		return (NULL);

	block = (char *) malloc(sizeof(char) * size);

	if (block == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		block[i] = c;
	}

	return (block);
}
