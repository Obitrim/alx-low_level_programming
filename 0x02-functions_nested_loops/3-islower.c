#include "main.h"
/**
 * _islower - Check if number is alphabet
 *
 * Return: 1 if @c is lowercase alphabet or 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;

	return (0);
}
