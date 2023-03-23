#include "main.h"
/**
 * _isdigit - checks for digit
 *
 * @c: character code
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
