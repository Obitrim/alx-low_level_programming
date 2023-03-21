#include "main.h"
/**
 * _isalpha - checks if code is an alphabet
 *
 * @c: character code to be checked
 *
 * Return: 1 if @c is an alphabet or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

	return (0);
}
