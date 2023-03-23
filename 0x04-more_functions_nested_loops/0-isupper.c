#include "main.h"
/**
 *  _isupper - checks if @c is uppercase
 *
* @c: character code
*
 * Return: Always 0 (Success)
 */
int  _isupper(int c)
{
	return ((c >= 65) && (c <= 90) ? 1 : 0);
}
