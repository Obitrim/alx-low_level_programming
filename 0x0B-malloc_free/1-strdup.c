#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate string at @str
 * @str: pointer to string to duplicate
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = (char *) malloc((strlen(str) + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);
	return (dup);
}
