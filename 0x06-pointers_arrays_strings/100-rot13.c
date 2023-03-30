#include "main.h"
#include <stdio.h>
/**
 * rot13 - rot13 encoder
 * @str: pointer to string param
 * Return: *str
 */
char *rot13(char *str)
{
	int i, j;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotdata[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data1[j])
			{
				s[i] = rotdata[j];
				break;
			}
		}
	}
	return (str);
}
