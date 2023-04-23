#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: pointer to first string
* @s2: pointer to second string
 * Return: pointer to new string;
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	new_string = (char *) malloc(strlen(s1) + strlen(s2) + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	strcat(new_string, s1);
	strcat(new_string, s2);

	return (new_string);
}
