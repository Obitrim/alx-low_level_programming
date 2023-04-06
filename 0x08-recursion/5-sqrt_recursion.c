#include "main.h"

int _helper(int n, int low);
/**
 * _sqrt_recursion - find square root of a number
 * @n: number
 * Return: square root of @n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_helper(n, 1));
}
/**
* _helper - sub routine helper
* @n: number
* @low: low index
* Return: square root
*/
int _helper(int n, int low)
{
	int square;

	square = low * low;
	if (square > n)
		return (-1);
	if (square == n)
		return (low);

	return (_helper(n, low + 1));
}
